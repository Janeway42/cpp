#include "FragTrap.hpp"

//----------Constructors & Destructors----------------

FragTrap::FragTrap(void): ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap " << name << " constructor called" << std::endl;
	setHit(100);
	setEnergy(100);
	setDamage(30);
}

FragTrap::FragTrap(const FragTrap &existing)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = existing;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->getName() << " destructor called" << std::endl;
}

//------------------Operators--------------------------

FragTrap& FragTrap::operator =(FragTrap const &existing)
{
    std::cout << "FragTrap " << this->getName() << " copy asignment operator called" << std::endl;
    if (this != &existing)
    {
        setName(existing.getName());
        setHit(existing.getHit());
        setEnergy(existing.getEnergy());
        setDamage(existing.getDamage());
    }
    return (*this);
}

//----------Public Functions------------------------

void FragTrap::highFivesGuys(void)
{
    if (this->getFragHit() > 0)
    	std::cout << "FragTrap " << this->getName() << " sends positive high fives!" << std::endl;
    else
        std::cout << "FragTrap " << this->getName() << " can't send positive high fives as it has already bit the bullet!" << std::endl;
}

std::string FragTrap::getFragName(void)
{
    return(this->getName());
}

int FragTrap::getFragHit(void)const
{
    return(this->getHit());
}

int FragTrap::getFragEnergy(void)const
{
    return(this->getEnergy());
}

int FragTrap::getFragDamage(void)const
{
    return(this->getDamage());
}