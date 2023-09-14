#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

using std::cout;
using std::endl;
using std::string;
# include <cstdlib>

class Zombie
{
	string  Name;
public:
	Zombie(string name);
	Zombie();
	~Zombie(void);
	void announce( void );
};

#endif