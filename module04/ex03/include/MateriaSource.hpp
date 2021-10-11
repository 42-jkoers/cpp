#pragma once

#include "IMateriaSource.hpp"
#include <string>

class MateriaSource : public IMateriaSource {
  private:
	size_t	  current;
	AMateria* sources[4];

  public:
	MateriaSource();
	virtual ~MateriaSource();
	void	  learnMateria(AMateria* m);
	AMateria* createMateria(const std::string& type);

  private:
	MateriaSource(const MateriaSource& other);
	MateriaSource& operator=(const MateriaSource& other);
};
