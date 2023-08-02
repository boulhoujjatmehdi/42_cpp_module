#include "Fixed.hpp"
#include <iostream>

int main( void ) {
Fixed a;
Fixed b( a );
Fixed c;
c = b;
std::cout << a.getRawBits() << std::endl;
std::cout << b.getRawBits() << std::endl;
a.setRawBits(10);
std::cout << a.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl;
return 0;
}

// int main( void ) {
// 	// Fixed::setVerbose(true);
// 	Fixed a;
// 	std::cout << a.getRawBits() << std::endl;

// 	a.setRawBits(21);
// 	std::cout << a.getRawBits() << std::endl;

// 	Fixed b( a );
// 	std::cout << b.getRawBits() << std::endl;

// 	b.setRawBits(42);
// 	Fixed c;
// 	c = b;
// 	std::cout << b.getRawBits() << std::endl;
// 	std::cout << c.getRawBits() << std::endl;

// 	std::cout << a.getRawBits() << std::endl;
// 	std::cout << b.getRawBits() << std::endl;
// 	std::cout << c.getRawBits() << std::endl;
// 	return 0;
// }