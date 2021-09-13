#include "animals.hpp"

Animal::Animal() : type("generic animal") {
	std::cout << "Animal of type " << type << " was created" << std::endl;
}

Animal::Animal(std::string type) : type(type) {
	std::cout << "Animal of type " << type << " was created" << std::endl;
}

Animal::Animal(const Animal& cp) {
	*this = cp;
	std::cout << "Animal of type " << type << " was created" << std::endl;
}

Animal& Animal::operator=(const Animal& cp) {
	type = cp.type;
	std::cout << "Animal of type " << type << " was created" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal of type " << type << " was destroyed" << std::endl;
}

void Animal::makeSound() {
	std::cout << "Animal made a ' ' sound" << std::endl;
}

// Dog
Dog::Dog() : Animal("Dog") {
	std::cout << "Dog of type " << type << " was created" << std::endl;
}

Dog::Dog(const Dog& cp) {
	*this = cp;
	std::cout << "Dog of type " << type << " was created" << std::endl;
}

Dog& Dog::operator=(const Dog& cp) {
	type = cp.type;
	std::cout << "Dog of type " << type << " was created" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog of type " << type << " was destroyed" << std::endl;
}

void Dog::makeSound() {
	std::cout << "Dog made a 'woof' sound" << std::endl;
}

// Cat
Cat::Cat() : Animal("Cat") {
	std::cout << "Cat of type " << type << " was created" << std::endl;
}

Cat::Cat(const Cat& cp) {
	*this = cp;
	std::cout << "Cat of type " << type << " was created" << std::endl;
}

Cat& Cat::operator=(const Cat& cp) {
	type = cp.type;
	std::cout << "Cat of type " << type << " was created" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat of type " << type << " was destroyed" << std::endl;
}

void Cat::makeSound() {
	std::cout << "Cat made a 'miaow' sound" << std::endl;
}
