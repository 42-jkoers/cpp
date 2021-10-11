#pragma once
#include "ICharacter.hpp"
#define INVENTORY_SIZE 4
class Character : public ICharacter {

  public:
	Character(const std::string& name);
	virtual ~Character();
	const std::string& getName() const;
	void			   equip(AMateria* m);
	void			   unequip(int idx);
	void			   use(int idx, ICharacter& target);

  private:
	std::string name;
	int			equipped;
	AMateria*	inventory[INVENTORY_SIZE];

	// boilerplate
	Character();
	Character(const Character& cp);
	Character& operator=(const Character& cp);
};
