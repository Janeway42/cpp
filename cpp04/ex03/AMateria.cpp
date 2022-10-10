#include "AMateria.hpp"

//-----------Constructors & Destructors----------

AMateria::AMateria(void)
{
	std::cout << "AMateria default constructor called" << std::endl;
	this->type = "no type";
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "AMateria type constructor called" << std::endl;
	this->type = type;
}

AMateria::AMateria(const AMateria &existing)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = existing;
}

AMateria::~AMateria(void)
{
	std::cout << "Amateria destructor called" << std::endl;
}

//----------------- Operators--------------------

AMateria& AMateria::operator= (AMateria const &existing)
{
	std::cout << "AMateria copy assignment operator called" << std::endl;
}
//-------------Public Functions------------------

const std::string& AMateria::getType(void)const
{
	return (this->type);
}