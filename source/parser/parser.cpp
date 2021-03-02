//Parser.cpp

#include "parser.hpp"
#include <utility>
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

    jmap::~jmap() {}

    jmap::jmap(std::string name) {}
    
    void jmap::parse(std::string in) 
    {
        std::string key_aux;
        std::string value_aux;
        enum class status { EXPECT_OPEN, EXPECT_KEY, OPEN_KEY, EXPECT_COLON, EXPECT_VAL, OPEN_VAL, EXPECT_ACTION};


        status the_status = status::EXPECT_OPEN;
        for (auto a : in)
        {
            if (the_status == status::EXPECT_OPEN)
            {
                if (in[a] <= ' ') continue;
                else if (in[a] == '{') 
                {
                    the_status = status::EXPECT_KEY;
                    //stack increase
                }
                else //crash
            }

            if (the_status == status::EXPECT_KEY)
            {
                if (in[a] <= ' ') continue;
                else if (in[a] <= '\"')
                {
                    the_status = status::OPEN_KEY;
                }
            }

            if (the_status == status::OPEN_KEY)
            {
                if (in[a] == '\"' and in[a-1] != '\\')
                {
                    the_status = status::EXPECT_COLON;
                    continue;
                }
                else key_aux.push_back(in[a]);
            }
        }
    }

    void jmap::out(std::string path, std::string filename)
    {
        std::ofstream FILE(path+filename);
        //need
    }
#endif
