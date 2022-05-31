#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	
	protected:

	std::string type;

	public:

	WrongAnimal( void );
	WrongAnimal( WrongAnimal const & );
	~WrongAnimal( void );
	WrongAnimal &	operator=( WrongAnimal const & );

	void	makeSound() const;
	std::string		getType() const;

};

#endif
