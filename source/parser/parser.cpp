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
        //need
    }

    void jmap::out(std::string path, std::string filename)
    {
        std::ofstream FILE(path+filename);
        //need
    }
#endif
