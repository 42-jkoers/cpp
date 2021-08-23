#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon {
	std::string type;

  public:
	Weapon(std::string name);
	const std::string& getType();
	void			   setType(std::string type);
};

#endif
