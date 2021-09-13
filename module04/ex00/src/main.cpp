#include "animals.hpp"

int main() {
	const Animal* animal_animal = new Animal();
	const Animal* animal_dog = new Dog();
	const Animal* animal_cat = new Cat();
	std::cout << std::endl;
	animal_animal->makeSound();
	animal_cat->makeSound();
	animal_dog->makeSound();

	// litteratly the only difference is the word virtual
	const WrongAnimal* wrongAnimal_wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongAnimal_cat = new WrongCat();
	std::cout << std::endl;
	wrongAnimal_wrongAnimal->makeSound();
	wrongAnimal_cat->makeSound();
	return 0;
}
