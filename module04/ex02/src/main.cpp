#include "../include/animals.hpp"

#define N_ANIMALS 2

int main() {
	const size_t n_dogs = N_ANIMALS / 2;
	Animal*		 animals[N_ANIMALS];

	for (size_t i = 0; i < n_dogs; i++) {
		animals[i] = new Dog();
	}
	for (size_t i = n_dogs; i < N_ANIMALS; i++) {
		animals[i] = new Cat();
	}

	for (size_t i = 0; i < N_ANIMALS; i++) {
		delete animals[i];
	}
	return 0;
}
