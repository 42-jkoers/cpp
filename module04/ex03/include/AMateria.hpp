#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
class AMateria;
#include "ICharacter.hpp"

class AMateria {
  private:
	AMateria();

  protected:
	std::string type;

  public:
	AMateria(const std::string& type);
	AMateria(const AMateria& cp);
	AMateria& operator=(const AMateria& cp);
	virtual ~AMateria();
	const std::string& getType() const;
	virtual AMateria*  clone() const = 0;
	virtual void	   use(ICharacter& target);
};

#endif
