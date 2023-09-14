#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

#include <map>


using std::map;
using std::string;
using std::cout;
using std::endl;

class Harl
{
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
    public:
    void complain(string level);
};


#endif