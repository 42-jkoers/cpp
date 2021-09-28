#include "Zombie.hpp"

int main() {
	const Zombie joji("Joji");
	joji.announce();

	const Zombie* sedona = newZombie("Sedona");
	sedona->announce();
	delete sedona;

	randomChump("ABBA");

	return 0;
}
