#pragma once
#include <cstdlib>
#include <iostream>

class Animal {
  public:
	Animal();
	Animal(std::string type);
	Animal(const Animal& cp);
	Animal& operator=(const Animal& cp);
	~Animal();
	virtual void makeSound();

  protected:
	std::string type;
};

class Dog : Animal {
  public:
	Dog();
	Dog(const Dog& cp);
	Dog& operator=(const Dog& cp);
	~Dog();
	void makeSound();
};

class Cat : Animal {
  public:
	Cat();
	Cat(const Cat& cp);
	Cat& operator=(const Cat& cp);
	~Cat();
	void makeSound();
};
