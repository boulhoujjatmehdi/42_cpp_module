

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <math.h>

using std::cout;
using std::endl;

class Fixed
{
    int fixValue;
    static const int nbFractBit  = 8;

public:

    //orthodox//
    Fixed(const Fixed& copy);
    Fixed(void);
    ~Fixed(void);
    Fixed& operator = (const Fixed& op);

    //setter&getter
    int     getRawBits(void) const;
    void    setRawBits(int val);
    
    //constructors
    Fixed(const int val);
    Fixed(const float val);

    //totype
    float   toFloat(void) const;
    int     toInt(void) const;


};

std::ostream& operator<< (std::ostream& os, const Fixed& obj);
#endif

