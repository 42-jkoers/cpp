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
	virtual void makeSound() const = 0;
	std::string	 getType() const;
	virtual ~Animal();

  protected:
	std::string type;
};

class Dog : public Animal {
  public:
	Dog();
	Dog(const Dog& cp);
	Dog& operator=(const Dog& cp);
	virtual ~Dog();
	void   makeSound() const;

	Brain* brain;
};

class Cat : public Animal {
  public:
	Cat();
	Cat(const Cat& cp);
	Cat& operator=(const Cat& cp);
	virtual ~Cat();
	void   makeSound() const;

	Brain* brain;
};
