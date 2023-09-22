
#include "Fixed.hpp"
#include <iostream>



Fixed::Fixed(){
    this->fixValue = 0;
    cout << "Default constructor called" << endl;
}

Fixed::Fixed(Fixed &f)
{
    cout << "Copy constructor called" << endl;
    this->fixValue = f.getRawBits();
}

Fixed::~Fixed()
{
    cout << "Destructor called" << endl;
}

Fixed& Fixed::operator=(Fixed &op){
    cout << "Copy assignment operator called" << endl;
    this->fixValue = op.getRawBits();
    return *this;
}

int Fixed::getRawBits(){
    cout << "getRawBits member function called" << endl;

    return this->fixValue;
}

void Fixed::setRawBits(int val){
    cout << "setRawBits member function called" << endl;
    this->fixValue  = val;
}