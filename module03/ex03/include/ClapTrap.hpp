#pragma once

#include <iostream>

class ClapTrap {

  protected:
	std::string	 _name;
	unsigned int _hitPoints;
	unsigned int _energyPoints;
	unsigned int _attackDamage;

  public:
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(const ClapTrap& original);

	ClapTrap&	 operator=(const ClapTrap& original);
	virtual void attack(const std::string& target);
	void		 takeDamage(unsigned int amount);
	void		 beRepaired(unsigned int amount);
};
