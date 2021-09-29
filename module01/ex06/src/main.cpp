#include "Karen.hpp"
int main(int argc, const char* argv[]) {
	Karen karen;
	if (argc != 2)
		karen.insignificant();
	else
		karen.complainAllLevels(argv[1]);
	return 0;
}
