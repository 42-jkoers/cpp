#pragma once
#include <cstdlib>
#include <iostream>

//
// Brain
//
#define N_IDEAS 100
class Brain {

  public:
	std::string ideas[N_IDEAS];
	Brain();
	Brain(const Brain& cp);
	Brain& operator=(const Brain& cp);
	~Brain();
};

class Animal {
  public:
	Animal();
	Animal(std::string type);
	Animal(const Animal& cp);
	Animal& operator=(const Animal& cp);
	virtual ~Animal();
	virtual void makeSound() const;

  protected:
	std::string type;
};

class Dog : public Animal {

  public:
	Brain* brain;
	Dog();
	Dog(const Dog& cp);
	Dog& operator=(const Dog& cp);
	virtual ~Dog();
	void makeSound() const;
};

class Cat : public Animal {
  public:
	Brain* brain;
	Cat();
	Cat(const Cat& cp);
	Cat& operator=(const Cat& cp);
	virtual ~Cat();
	void makeSound() const;
};

//
// wrong
//

class WrongAnimal {
  public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal& cp);
	WrongAnimal& operator=(const WrongAnimal& cp);
	virtual ~WrongAnimal();
	void makeSound() const;

  protected:
	std::string type;
};

class WrongCat : public WrongAnimal {
  public:
	WrongCat();
	WrongCat(const WrongCat& cp);
	WrongCat& operator=(const WrongCat& cp);
	virtual ~WrongCat();
	void makeSound() const;
};
