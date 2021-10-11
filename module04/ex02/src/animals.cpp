#include "../include/animals.hpp"

//
// Brain
//

Brain::Brain() {
	std::cout << "Brain was created" << std::endl;
}

Brain::Brain(const Brain& cp) {
	*this = cp;
	for (size_t i = 0; i < N_IDEAS; i++) {
		ideas[i] = cp.ideas[i];
	}
	std::cout << "Brain was copied" << std::endl;
}

Brain& Brain::operator=(const Brain& cp) {
	for (size_t i = 0; i < N_IDEAS; i++) {
		ideas[i] = cp.ideas[i];
	}
	std::cout << "Brain was copied" << std::endl;
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain was deleted" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal of type " << type << " was destroyed" << std::endl;
}

std::string Animal::getType() const {
	return type;
}

// Dog
Dog::Dog() {
	type = "dog";
	brain = new Brain();
	std::cout << "Dog of type " << type << " was created" << std::endl;
}

Dog::Dog(const Dog& cp) {
	*this = cp;
	std::cout << "Dog of type " << type << " was created" << std::endl;
}

Dog& Dog::operator=(const Dog& cp) {
	brain = new Brain(*cp.brain);
	type = cp.type;
	std::cout << "Dog of type " << type << " was created" << std::endl;
	return *this;
}

Dog::~Dog() {
	delete brain;
	std::cout << "Dog of type " << type << " was destroyed" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Dog made a 'woof' sound" << std::endl;
}

// Cat
Cat::Cat() {
	type = "cat";
	brain = new Brain();
	std::cout << "Cat of type " << type << " was created" << std::endl;
}

Cat::Cat(const Cat& cp) {
	*this = cp;
	brain = new Brain(*cp.brain);
	std::cout << "Cat of type " << type << " was created" << std::endl;
}

Cat& Cat::operator=(const Cat& cp) {
	brain = new Brain(*cp.brain);
	type = cp.type;
	std::cout << "Cat of type " << type << " was created" << std::endl;
	return *this;
}

Cat::~Cat() {
	delete brain;
	std::cout << "Cat of type " << type << " was destroyed" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Cat made a 'miauw' sound" << std::endl;
}
