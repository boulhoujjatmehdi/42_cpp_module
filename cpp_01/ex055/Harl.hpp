// #include <>
#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <map>

using std::cout;
using std::endl;
using std::string;

class Harl
{
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

public:
    void complain( std::string level );
};

#endif