

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <limits>

using std::cout;
using std::endl;

class Fixed
{
    int fixValue;
    static const int nbFractBit  = 8;

public:
    Fixed(const Fixed& copy);
    Fixed(void);
    ~Fixed(void);
    Fixed& operator = (const Fixed& op);
    int getRawBits(void) const;
    void setRawBits(int val);

    Fixed(int);
    Fixed(float);

    float toFloat(void) const;
    int toInt(void) const;


};

std::ostream& operator<< (std::ostream& os, const Fixed& obj);
#endif