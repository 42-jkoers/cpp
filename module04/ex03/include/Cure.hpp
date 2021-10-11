#pragma once

#include "AMateria.hpp"

class Cure : public AMateria {
  public:
	Cure();
	virtual ~Cure();
	void	  use(ICharacter& target);
	AMateria* clone() const;

  private:
	Cure(const Cure& other);
	Cure& operator=(const Cure& other);
};
