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
	std::cout << "Dog of type " << type << " was created" << std::endl;
}

Dog::Dog(const Dog& cp) {
	*this = cp;
	std::cout << "Dog of type " << type << " was created" << std::endl;
}

Dog& Dog::operator=(const Dog& cp) {
	type = cp.type;
	std::cout << "Dog of type " << type << " was created" << std::endl;
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog of type " << type << " was destroyed" << std::endl;
}

void Dog::makeSound() const {
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
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat of type " << type << " was destroyed" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Cat made a 'miauw' sound" << std::endl;
}

//
// wrong
//

WrongAnimal::WrongAnimal() : type("generic WrongAnimal") {
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
