#include "../include/DiamondTrap.hpp"
#include "../include/FragTrap.hpp"
#include "../include/ScavTrap.hpp"

int main() {
	{
		ClapTrap claptrap("MGMT");
		claptrap.attack("A lifeless object");
		claptrap.takeDamage(3);
		claptrap.beRepaired(2);
	}
	std::cout << std::endl;
	{
		ScavTrap scavtrap("The Jungle Gigants");
		scavtrap.attack("A lifeless object");
		scavtrap.takeDamage(3);
		scavtrap.beRepaired(2);
		scavtrap.guardGate();
	}
	std::cout << std::endl;
	{
		FragTrap fragtrap("AUORA");
		fragtrap.attack("A lifeless object");
		fragtrap.takeDamage(3);
		fragtrap.beRepaired(2);
		fragtrap.highFivesGuys();
	}
	std::cout << std::endl;
	{
		DiamondTrap diamondtrap("London Grammar");
		diamondtrap.attack("A lifeless object");
		diamondtrap.takeDamage(3);
		diamondtrap.beRepaired(2);
		diamondtrap.guardGate();
		diamondtrap.highFivesGuys();
		diamondtrap.whoAmI();
	}
	return 0;
}
