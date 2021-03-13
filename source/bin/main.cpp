#include "parser.hpp"

int main()
{
    //algo
    jlib::jmap thing(std::string("../../data/test.json"));
    thing.add_entry(std::string("pene"), std::string("shutup"));
    std::cout << thing.get_str(std::string("hello")) << std::endl;
    std::cout << thing.get_str(std::string("hello2")) << std::endl;
    std::cout << thing.get_int(std::string("entero")) << std::endl;
    std::cout << thing.get_double(std::string("doubletype")) << std::endl;
}
