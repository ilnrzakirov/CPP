#include "whatever.hpp"


int main(void){
//	int x = 5;
//	int y = 7;
//	char a = 'a';
//	char b = 'b';
//
//	std::cout << "int\nmax(x = 5 , y = 7)\n";
//	std::cout << max(x, y) << "\n";
//	std::cout << "min(x = 5 , y = 7)\n";
//	std::cout << min(x, y) << "\n";
//	std::cout << "swap( x= 5 , y = 7)\n";
//	swap(x, y);
//	std::cout << "x: " << x << " y: " << y << "\n";
//
//	std::cout << "char\nmax(a = a , b = b)\n";
//	std::cout << max(a, b) << "\n";
//	std::cout << "min(a = a , b = b)\n";
//	std::cout << min(a, b) << "\n";
//	std::cout << "swap(a = a , b = b)\n";
//	swap(a, b);
//	std::cout << "a: " << a << " b: " << b << "\n";
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}