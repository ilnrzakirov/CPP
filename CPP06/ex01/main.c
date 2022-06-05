#include "Serialization.hpp"


uintptr_t serialize(Data* ptr){
	std::cout << "Serialization of data\n";
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw){
	std::cout << "Deserialization of data\n";
	return reinterpret_cast<Data *>(raw);
}

int main(void){
	struct Serialization *serialization = new serialization;
	serialization->c = 's';
	serialization->d = 0.0023;
	serialization->f = 0.045f;
	serialization->i = 9;


}