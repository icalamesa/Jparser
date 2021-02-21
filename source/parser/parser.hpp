//Parser.hpp

#include <iostream>
#include <string>
#include <queue>
#include <map>
#include <utility>
#ifndef PARSERHPP
#define PARSERHPP

namespace jlib
{
    class jmap
    {
        //actual storage
        std::map<std::string, std::string> _strings;
        std::map<std::string, int> _integers;
        std::map<std::string, double> _doubles;

        //input
        public:
        void add_entry(std::string, std::string);
        void add_entry(std::string, int);
        void add_entry(std::string, double);
        
        void parse(std::string);
        
        //output
        void out(std::string path, std::string filename);
        
        void reset();

        public:
        std::string get_str(std::string);
        int get_int(std::string);
        double get_double(std::string);
        
        template <class T>
        T get(std::string name, T& value);
        
        //these methods will call parser and store crap with it
        jmap(std::ifstream file);
        jmap(std::string);
        ~jmap();
    };
}


#endif

