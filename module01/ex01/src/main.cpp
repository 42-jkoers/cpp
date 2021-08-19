#include "Zombie.hpp"
#define N 3

int main()
{
	Zombie *horde = zombieHorde(N, "bert");
	for (size_t i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
	return 0;
}
