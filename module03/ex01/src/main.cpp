#include "ScavTrap.hpp"

int main() {
	ScavTrap s;

	s.attack("air");
	s.takeDamage(42);
	s.guardGate();

	return 0;
}
