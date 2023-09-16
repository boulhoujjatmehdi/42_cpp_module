#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <cstdlib>

class Zombie
{
	std::string  Name;
public:
	Zombie(std::string name);
	Zombie();
	~Zombie(void);
	void announce( void );
};

#endif