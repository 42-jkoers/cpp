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
	void printChar(char c);
	void printChar(int i);
	void printChar(float f);
	void printChar(double d);

	void printInt(char c);
	void printInt(int i);
	void printInt(float f);
	void printInt(double d);

	void printFloat(char c);
	void printFloat(int i);
	void printFloat(float f);
	void printFloat(double d);

	void printDouble(char c);
	void printDouble(int i);
	void printDouble(float f);
	void printDouble(double d);

  private:
	T& operator=(const T& cp);
	T(const T& cp);
};
