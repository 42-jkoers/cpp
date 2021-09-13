#include "animals.hpp"

int main() {
	std::cout << std::endl;

	const Animal* animal_animal = new Animal();
	const Animal* animal_dog = new Dog();
	const Animal* animal_cat = new Cat();
	std::cout << std::endl;
	animal_animal->makeSound();
	animal_cat->makeSound();
	animal_dog->makeSound();
	delete animal_animal;
	delete animal_cat;
	delete animal_dog;
	std::cout << std::endl;
	std::cout << std::endl;

	// literately the only difference is the word virtual
	const WrongAnimal* wrongAnimal_wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongAnimal_cat = new WrongCat();
	std::cout << std::endl;
	wrongAnimal_wrongAnimal->makeSound();
	wrongAnimal_cat->makeSound();
	delete wrongAnimal_wrongAnimal;
	delete wrongAnimal_cat;
	return 0;
}
