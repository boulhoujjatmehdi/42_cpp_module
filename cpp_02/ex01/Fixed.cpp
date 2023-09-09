
#include "Fixed.hpp"
#include <iostream>
#include <cmath>
#include <cstdlib>

int pow2(int pow)
{
    int ret = 2;
    while(pow > 1)
    {
        ret *= 2;
        pow --;
    }
    return ret;
}

Fixed::Fixed(){
    this->fixValue = 0;
    cout << "Default constructor called" << endl;
    return ;
}

Fixed::Fixed(const Fixed& f)
{
    cout << "Copy constructor called" << endl;
    *this = f;
    return ;
}

Fixed::~Fixed()
{
    cout << "Destructor called" << endl;
}

Fixed& Fixed::operator=(const Fixed& op)
{
    cout << "Assignation operator called" << endl;
    this->fixValue = op.fixValue;
    return *this;
}

int Fixed::getRawBits() const
{
    return fixValue;
}

void Fixed::setRawBits(int val){
    cout << "setRawBits member function called" << endl;
    this->fixValue  = val;
}

Fixed::Fixed(int val)
{
    cout << "Int constructor called" << endl;
    this->fixValue = val * pow2(this->nbFractBit);
    return ;
}
Fixed::Fixed(float val)
{
    cout << "Float constructor called" << endl;
    this->fixValue = roundf(val * pow2(this->nbFractBit));
    return ;
}

int Fixed::toInt(void) const
{
    return this->fixValue / pow2(nbFractBit);
}

float Fixed::toFloat(void) const
{

    return (float)this->fixValue / pow2(nbFractBit);
}

//-----------OPERATORS OVERLOADS-----------------
std::ostream& operator<< (std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    (void)obj;
    return os;
}

