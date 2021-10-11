#pragma once

#include <iostream>
#include <string>
class AMateria;
#include "ICharacter.hpp"

class AMateria {
  protected:
	std::string type;

  public:
	AMateria(const std::string& type);
	virtual ~AMateria();
	const std::string& getType() const;
	virtual AMateria*  clone() const = 0;
	virtual void	   use(ICharacter& target);

  private:
	AMateria(const AMateria& cp);
	AMateria& operator=(const AMateria& cp);
	AMateria();
};
