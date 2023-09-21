
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

//constructors
Fixed::Fixed(){
        this->fixValue = 0;
        // cout << "Default constructor called" << endl;
    return ;
}

Fixed::Fixed(const Fixed& f)
{
    // cout << "Copy constructor called" << endl;
    *this = f;
    return ;
}

Fixed::Fixed(int val)
{
    // cout << "Int constructor called" << endl;
    this->fixValue = val * pow2(this->nbFractBit);
    return ;
}
Fixed::Fixed(float val)
{
    // cout << "Float constructor called" << endl;
    this->fixValue = roundf(val * pow2(this->nbFractBit));
    return ;
}
// Destructor
Fixed::~Fixed()
{
    // cout << "Destructor called" << endl;
}

//Getters Setters
int Fixed::getRawBits() const
{
    return fixValue;
}
void Fixed::setRawBits(int val){
    this->fixValue  = val;
}

//Conversion
int Fixed::toInt(void) const
{
    return this->fixValue / pow2(nbFractBit);
}
float Fixed::toFloat(void) const
{

    return (float)this->fixValue / pow2(nbFractBit);
}
// ----------------OPERATORS OVERLOADS-----------------

std::ostream& operator<< (std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat() ;
    return os;
}
Fixed& Fixed::operator=(const Fixed& op)
{
    this->fixValue = op.fixValue;
    return *this;
}
float Fixed::operator+ (const Fixed& obj) const
{
    return (this->toFloat() + obj.toFloat());
}
float Fixed::operator- (const Fixed& obj) const
{
    return (this->toFloat() - obj.toFloat());
}
float Fixed::operator* (const Fixed& obj) const
{
    return (this->toFloat() * obj.toFloat());
}
float Fixed::operator/ (const Fixed& obj) const
{
    return (this->toFloat() / obj.toFloat());
}

// ----- comparison operators-----------------

bool Fixed::operator== (const Fixed& obj) const
{
    return (this->fixValue == obj.fixValue);
}
bool Fixed::operator!= (const Fixed& obj) const
{
    return (this->fixValue != obj.fixValue);
}
bool Fixed::operator>= (const Fixed& obj) const
{
    return (this->fixValue >= obj.fixValue);
}
bool Fixed::operator<= (const Fixed& obj) const
{
    return (this->fixValue <= obj.fixValue);
}
bool Fixed::operator> (const Fixed& obj) const
{
    return (this->fixValue > obj.fixValue);
}
bool Fixed::operator< (const Fixed& obj) const
{
    return (this->fixValue < obj.fixValue);
}

//------- increment decrement ops------------

float Fixed::operator++()
{
    (*this).fixValue ++;
    return toFloat();
}
float Fixed::operator++(int)
{
    float tmp = toFloat();
    fixValue++;
    return tmp;
}
float Fixed::operator--()
{
    this->fixValue--;
    return this->toFloat();
}
float Fixed::operator--(int)
{
    float tmp = this->toFloat();
    this->fixValue--;
    return tmp;
}
//min max operators
float Fixed::min(const Fixed&obj1, const Fixed&obj2)
{
    return obj1 >= obj2 ? obj2.toFloat() : obj1.toFloat();
}
float Fixed::max(const Fixed&obj1, const Fixed&obj2)
{
    return obj1 <= obj2 ? obj2.toFloat() : obj1.toFloat();
}