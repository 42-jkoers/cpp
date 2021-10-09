#include "../include/animals.hpp"

#define N_ANIMALS 3

int main() {

	std::cout << "\nDemonstarting deep Brain copy" << std::endl;
	Dog dog;
	dog.brain->ideas[0] = "Why do people think a straw has 2 holes?";
	Dog copy(dog);

	std::cout << "\n     first idea of dog: " << dog.brain->ideas[0] << std::endl;
	std::cout << "first idea of dog copy: " << copy.brain->ideas[0] << std::endl;

	std::cout << "\n\n " << std::endl;

	const int n_dogs = N_ANIMALS / 2;
	Animal*	  animals[N_ANIMALS];

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
