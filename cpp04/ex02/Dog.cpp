#include "Dog.hpp"

//-----------Constructors & Destructors-----------

Dog::Dog(void) : Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
	_greyCells = new Brain();
}

Dog::Dog(const Dog &existing)
{
	std::cout << "Dog copy constructor called" << std::endl;
	_greyCells = new Brain();
    *this = existing;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete (_greyCells);
}

//-----------Overload Operator--------------

Dog& Dog::operator = (Dog const &existing)
{
	std::cout << "Dog copy assignment operator called" << std::endl;

	if (this != &existing)
    {
        this->type = existing.getType();
		*this->_greyCells = *existing._greyCells;
    }
	return (*this);
}

//---------Public Functions---------------------

void Dog::makeSound(void)const
{
    std::cout << this->type << ": Wof Wof!" << std::endl;
}

void Dog::printDogIdeas(void)
{
	this->_greyCells->printIdeas();
}