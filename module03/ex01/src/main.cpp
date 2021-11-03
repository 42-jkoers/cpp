#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int main() {
	{
		ClapTrap claptrap("MGMT");
		claptrap.attack("an innocent leaf");
		claptrap.takeDamage(3);
		claptrap.beRepaired(2);
	}
	std::cout << std::endl;
	{
		ScavTrap scavtrap("TWRP");
		scavtrap.attack("a lifeless object");
		scavtrap.takeDamage(3);
		scavtrap.beRepaired(2);
		scavtrap.guardGate();
	}
	return 0;
}
