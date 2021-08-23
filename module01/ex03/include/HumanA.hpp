#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"
#include <string>

class HumanA {
	std::string name;
	Weapon&		_weapon;

  public:
	HumanA(std::string name, Weapon& weapon) : _weapon(weapon) {}
	void attack();
};

#endif
