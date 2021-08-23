#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie {

  public:
	std::string name;
	Zombie();
	Zombie(std::string name);
	void announce();
	~Zombie();
};

Zombie* newZombie(std::string name);

#endif
