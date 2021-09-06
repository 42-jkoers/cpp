#include "FragTrap.hpp"

int main() {
	FragTrap s;
	FragTrap s1("Greg");
	FragTrap s2 = s;
	FragTrap s3(s);

	s.takeDamage(42);
	s.guardGate();
	s.highFiveGuys();
	return 0;
}
