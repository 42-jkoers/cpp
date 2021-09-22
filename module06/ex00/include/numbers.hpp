#pragma once
#include <cstdlib>
#include <iostream>
#define IMPOSSIBLE "impossible"

class T {
  public:
	T();
	virtual ~T();

	void printer(char c);
	void printer(int i);
	void printer(float f);
	void printer(double d);

  protected:
	std::string printChar(char c);
	std::string printChar(int i);
	std::string printChar(float f);
	std::string printChar(double d);

	std::string printInt(char c);
	std::string printInt(int i);
	std::string printInt(float f);
	std::string printInt(double d);

	std::string printFloat(char c);
	std::string printFloat(int i);
	std::string printFloat(float f);
	std::string printFloat(double d);

	std::string printDouble(char c);
	std::string printDouble(int i);
	std::string printDouble(float f);
	std::string printDouble(double d);

  private:
	T& operator=(const T& cp);
	T(const T& cp);
};
