#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() {}

Zombie::Zombie(std::string name) {
	this->name = name;
}

void Zombie::setName(std::string name) {
	this->name = name;
}

void Zombie::announce() const {
	std::cout << "<" << name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
	std::cout << "<" << name << "> deconstructed" << std::endl;
}
