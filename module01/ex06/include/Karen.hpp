#pragma once
#include <string>

class Karen {
  public:
	Karen();
	virtual ~Karen();
	void complain(std::string level);
	void complainAllLevels(std::string level);
	void insignificant();

  private:
	void   debug();
	void   info();
	void   warning();
	void   error();
	Karen& operator=(const Karen& cp);
	Karen(const Karen& cp);
};
