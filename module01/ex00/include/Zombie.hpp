#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie
{
	std::string name;

public:
	Zombie(std::string name);
	void announce();
	~Zombie();
};

Zombie *newZombie(std::string name);

#endif
