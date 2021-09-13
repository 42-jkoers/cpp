// #include <iostream>
// using namespace std;

// class Person {
// 	// Data members of person
//   public:
// 	Person(int x) { cout << "Person::Person(int ) called" << endl; }
// };

// class Faculty : public Person {
// 	// data members of Faculty
//   public:
// 	Faculty(int x) : Person(x) {
// 		cout << "Faculty::Faculty(int ) called" << endl;
// 	}
// };

// class Student : public Person {
// 	// data members of Student
//   public:
// 	Student(int x) : Person(x) {
// 		cout << "Student::Student(int ) called" << endl;
// 	}
// };

// class TA : public Faculty, public Student {
//   public:
// 	TA(int x) : Student(x), Faculty(x) {
// 		cout << "TA::TA(int ) called" << endl;
// 	}
// };

// int main() {
// 	TA ta1(30);
// }
#include <iostream>

class Base {

  protected:
	int x;
	int y;
	int z;

  public:
	Base(void) : x(0) {}
};

class Father : public virtual Base {
  protected:
	int preset;

  public:
	Father() : preset(1) {
		y = preset;
		z = preset;
	}
};

class Mother : public virtual Base {
  protected:
	int preset;

  public:
	Mother() : preset(2) {
		y = preset;
		z = preset;
	}
};

class Child : public Mother, public Father {
  public:
	Child() {
		y = Father::preset;
		z = Mother::preset;
	}

	int getX() const { return x }
	int getY() const { return y }
	int getZ() const { return z }
};
