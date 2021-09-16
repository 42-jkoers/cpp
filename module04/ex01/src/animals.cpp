#include "animals.hpp"

std::string* copy_array(const std::string arr[], size_t len) {
	std::string* copy = new std::string[len];
	while (len--)
		copy[len] = arr[len];
	return copy;
}

//
// Brain
//

Brain::Brain() {
	std::cout << "Brain was created" << std::endl;
}

Brain::Brain(const Brain& cp) {
	*this = cp;
	for (size_t i = 0; i < N_IDEAS; i++) {
		ideas[i] = cp.ideas[0];
	}
	std::cout << "Brain was created" << std::endl;
}

Brain& Brain::operator=(const Brain& cp) {
	for (size_t i = 0; i < N_IDEAS; i++) {
		ideas[i] = cp.ideas[0];
	}
	std::cout << "Brain was created" << std::endl;
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain was deleted" << std::endl;
}

//
// Animal
//

Animal::Animal() : type("generic") {
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
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal of type " << type << " was destroyed" << std::endl;
}

void Animal::makeSound() const {
	std::cout << "Animal made a '' sound" << std::endl;
}

// Dog
Dog::Dog() : Animal("Dog") {
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
Cat::Cat() : Animal("Cat") {
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

//
// wrong
//

WrongAnimal::WrongAnimal() : type("generic") {
	std::cout << "WrongAnimal of type " << type << " was created" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type) {
	std::cout << "WrongAnimal of type " << type << " was created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& cp) {
	*this = cp;
	std::cout << "WrongAnimal of type " << type << " was created" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& cp) {
	type = cp.type;
	std::cout << "WrongAnimal of type " << type << " was created" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal of type " << type << " was destroyed" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal made a '' sound" << std::endl;
}

// WrongCat
WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "WrongCat of type " << type << " was created" << std::endl;
}

WrongCat::WrongCat(const WrongCat& cp) {
	*this = cp;
	std::cout << "WrongCat of type " << type << " was created" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& cp) {
	type = cp.type;
	std::cout << "WrongCat of type " << type << " was created" << std::endl;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat of type " << type << " was destroyed" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "WrongCat made a 'miauw' sound" << std::endl;
}
