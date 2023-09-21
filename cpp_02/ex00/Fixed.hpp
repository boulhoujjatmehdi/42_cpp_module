

#ifndef FIXED_HPP
#define FIXED_HPP

using std::cout;
using std::endl;

class Fixed
{
    int fixValue;
    static const int nbFractBit = 8;

public:
    Fixed(Fixed &copy);
    Fixed(void);
    void operator= (Fixed &op);
    ~Fixed(void);

    int getRawBits(void);
    void setRawBits(int val);
};

#endif