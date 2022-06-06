#include "easyfind.hpp"
#include <vector>
#include <list>
#include <set>


int main(void) {
	std::list<int> list;

	std::cout << "List: \n";
	for (int i = 0; i < 8; i++){
		list.push_back(i);
	}
	try {
		std::cout << easyfind(list, 2) << "\n";
	} catch (std::exception &e) {
		std::cout << e.what();
	}
	std::cout << "\nVector: \n";
	std::vector<int> vector;
	for (int i = 0; i < 8; i++){
		vector.push_back(i);
	}
	try {
		std::cout << easyfind(vector, 1) << "\n";
	} catch (std::exception &e) {
		std::cout << e.what();
	}
	std::cout << "\nset: \n";
	std::set<int> set;
	for (int i = 0; i < 8; i++){
		set.insert(i);
	}
	try {
		std::cout << easyfind(set, 0) << "\n";
	} catch (std::exception &e) {
		std::cout << e.what();
	}
}