#include "ScavTrap.hpp"

int main() {
	ScavTrap s;
	ScavTrap s1("Greg");
	ScavTrap s2 = s;

	s.guardGate();
	s.takeDamage(42);

	return 0;
}
