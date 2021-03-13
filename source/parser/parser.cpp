//Parser.cpp

#include "parser.hpp"
#include <iostream>
#include <utility>
#include <exception>
#include <fstream>
#ifndef PARSERCPP
#define PARSERCPP
    using namespace jlib;

    void jmap::add_entry(std::string key, std::string value)
    {
        _strings.insert({key, value});
    }

    void jmap::add_entry(std::string key, int value)
    {
        _integers.insert({key, value});
    }

    void jmap::add_entry(std::string key, double value)
    {
        _doubles.insert({key, value});
    }

    std::string jmap::get_str(std::string name)
    {
        return this->_strings.at(name);
    }

    double jmap::get_double(std::string name)
    {
        return this->_doubles.at(name);
    }

    int jmap::get_int(std::string name)
    {
        return this->_integers.at(name);
    }

    jmap::~jmap() {}

    jmap::jmap(std::string name) 
    {
        std::ifstream file(name.data(), std::ios_base::in);
        std::string data_stream((std::istreambuf_iterator<char>(file)),(std::istreambuf_iterator<char>() )   );
        parse(data_stream);
    }
    
    void jmap::parse(std::string in) 
    {
        std::string key_aux;
        std::string value_aux;
        enum class status { EXPECT_OPEN, EXPECT_KEY, OPEN_KEY, EXPECT_COLON, EXPECT_VAL, OPEN_VAL, STRING, NUMBER, BOOL, EXPECT_ACTION};

        //still unused
        enum class backslashed { YES, NO };

        status the_status = status::EXPECT_OPEN;
        for (size_t a = 0; a < in.size(); a++)
        {
            if (the_status == status::EXPECT_OPEN)
            {
                if (in[a] <= ' ') continue;
                else if (in[a] == '{') 
                {
                    the_status = status::EXPECT_KEY;
                    //stack increase
                    continue;
                }
                else throw std::runtime_error("No bracket opening added to input json!");
            }
            
            else if (the_status == status::EXPECT_KEY)
            {

                //if we expect to find a keyword
                if (in[a] <= ' ') continue;
                else if (in[a] <= '\"')
                {
                    the_status = status::OPEN_KEY;
                    continue;
                }
                continue;
            }
            
            else if (the_status == status::OPEN_KEY)
            {

                //if already reading key
                //if " are detected and are not part of the string itself
                if (in[a] == '\"' and in[a-1] != '\\')
                {
                    the_status = status::EXPECT_COLON;
                    continue;
                }
                else 
                {
                    
                    key_aux.push_back(in[a]);
                }
                continue;
            }

            else if (the_status == status::EXPECT_COLON)
            {
                if (in[a] == ':')
                {
                    the_status = status::EXPECT_VAL;
                    continue;
                }
                //else throw std::runtime_error("No semicolon found bruh");
                continue;
            }

            else if (the_status == status::EXPECT_VAL)
            {
                if (in[a] == '\"') the_status = status::STRING;
                else if (in[a] == 'T') the_status = status::BOOL;
                else if (not (in[a] <= ' ')) the_status = status::NUMBER;

                continue;
            }

            else if (the_status == status::STRING)
            {
                if (in[a] == '\"' and in[a-1] != '\\')
                {
                    the_status = status::EXPECT_ACTION;
                    add_entry(key_aux, value_aux);
                }
                else value_aux.push_back(in[a]);


                continue;
            }

            else if (the_status == status::NUMBER)
            {
                if (in[a] <= ' ')
                {
                    if (value_aux.find('.') == std::string::npos)
                    {
                        add_entry(key_aux, std::stoi(value_aux));
                    }
                    else add_entry(key_aux, std::stod(value_aux));
                }
                else value_aux.push_back(in[a]);
            }

            else if (the_status == status::EXPECT_ACTION)
            {
                if (in[a] == '}') break;
                else if (in[a] == ',') 
                {
                    the_status = status::EXPECT_KEY;
                    key_aux.clear();
                    value_aux.clear();
                    continue;
                }
                else throw std::runtime_error("no end bracket found");
            }

        }
    }

    void jmap::out(std::string path, std::string filename)
    {
        std::ofstream file(path+filename);
        //need
    }

#endif
