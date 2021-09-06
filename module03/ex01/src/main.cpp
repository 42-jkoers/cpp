#include "ScavTrap.hpp"

int main() {
	ScavTrap s;
	ScavTrap s1("Greg");
	ScavTrap s2 = s;

	s.takeDamage(42);
	s.guardGate();

	return 0;
}
