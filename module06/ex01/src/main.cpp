#include <cstring>
#include <iostream>
#include <stdint.h>
#include <vector>

#define TYPE_SIZE 512

typedef struct s_Data {
	int	 x;
	char type[TYPE_SIZE];
} Data;

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int main() {
	Data	  data = {-42, "Hello World!"};

	uintptr_t p = serialize(&data);
	Data*	  copy = deserialize(p);

	std::cout << "x   : " << copy->x << "\n"
			  << "type: " << copy->type << "\n"
			  << std::endl;

	return 0;
}
