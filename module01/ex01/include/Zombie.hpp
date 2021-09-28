#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie {

  public:
	Zombie();
	Zombie(std::string name);
	void setName(std::string name);
	void announce() const;
	~Zombie();

  private:
	std::string name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);
Zombie* zombieHorde(int N, std::string name);

#endif
