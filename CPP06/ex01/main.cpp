#include "Serialization.hpp"


uintptr_t serialize(Serialization* ptr){
	std::cout << "Serialization of data\n";
	return reinterpret_cast<uintptr_t>(ptr);
}

Serialization* deserialize(uintptr_t raw){
	std::cout << "Deserialization of data\n";
	return reinterpret_cast<Serialization *>(raw);
}

int main(void){
	struct Serialization *serialization = new Serialization;
	serialization->c = 's';
	serialization->d = 0.0023;
	serialization->f = 0.045f;
	serialization->i = 9;

	uintptr_t serializationData = serialize(serialization);
	struct Serialization *reternData = deserialize(serializationData);
}