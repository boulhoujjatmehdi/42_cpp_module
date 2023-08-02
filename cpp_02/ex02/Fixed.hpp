

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

    //arithmetic operators
    float operator+(const Fixed& obj) const;
    float operator-(const Fixed& obj) const;
    float operator*(const Fixed& obj) const;
    float operator/(const Fixed& obj) const;
    //comparison operators
    bool operator==(const Fixed& obj) const;
    bool operator!=(const Fixed& obj) const;
    bool operator>=(const Fixed& obj) const;
    bool operator<=(const Fixed& obj) const;
    bool operator> (const Fixed& obj) const;
    bool operator< (const Fixed& obj) const;
    //increment decrement operators
    float operator++();
    float operator++(int);
    float operator--();
    float operator--(int);
    //min max operators
    static float min(const Fixed&obj1, const Fixed&obj2);
    static float max(const Fixed&obj1, const Fixed&obj2);
};

std::ostream& operator<< (std::ostream& os, const Fixed& obj);
#endif