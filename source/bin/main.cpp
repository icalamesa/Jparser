#include "parser.hpp"

int main()
{
    //algo
    jlib::jmap thing(std::string("../../data/test.json"));
    std::cout << "1 ";
    thing.add_entry(std::string("pene"), std::string("shutup"));
    std::cout << "2 ";
    std::cout << thing.get_str(std::string("hello")) << std::endl;
    std::cout << "3 ";
    std::cout << thing.get_str(std::string("hello2")) << std::endl;
    std::cout << "4 ";
    std::cout << thing.get_int(std::string("entero")) << std::endl;
    std::cout << "5 ";
    std::cout << thing.get_double(std::string("doubletype")) << std::endl;
    std::cout << "6 ";
    std::cout << thing.get_str(std::string("frijoles")) << std::endl;
}
