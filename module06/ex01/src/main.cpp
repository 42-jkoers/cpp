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
	unsigned char* p = new unsigned char[sizeof(Data)];
	size_t		   offset = 0;
	std::memcpy(p + offset, &ptr->x, sizeof(ptr->x));
	offset += sizeof(ptr->x);
	std::memcpy(p + offset, &ptr->type, sizeof(ptr->type));
	// offset += sizeof(ptr->x);
	return (uintptr_t)p;
}

Data* deserialize(uintptr_t raw) {
	Data*  data = new Data;
	size_t offset = 0;

	std::memcpy(&data->x, (void*)(raw + offset), sizeof(data->x));
	offset += sizeof(data->x);
	std::memcpy(&data->type, (void*)(raw + offset), sizeof(data->type));
	// offset += sizeof(data->type);
	return data;
}

int main() {
	Data	  data = {-42, "Hello World!"};

	uintptr_t p = serialize(&data);
	Data*	  copy = deserialize(p);

	std::cout << "x   : " << copy->x << "\n"
			  << "type: " << copy->type << "\n"
			  << std::endl;

	// delete p;
	// delete copy;

	return 0;
}
