

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
    int fixValue;
    static const int nbFractBit;

public:
    Fixed(Fixed &copy);
    Fixed(void);
    ~Fixed(void);
    void operator = (Fixed op);
    int getRawBits(void);
    void setRawBits(int val);
};

#endif