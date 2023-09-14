#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string	name)
{
	std::cout << "FragTrap " << this->getName() << " is created." << std::endl;
	setName(name);
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

FragTrap::~FragTrap()
{
	std::cout << "Bye, FragTrap " << this->getName() << "." << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj)
{
	std::cout << "FragTrap::Copy constructor called" << std::endl;
	setName(obj.getName());
	setHitPoints(obj.getHitPoints());
	setEnergyPoints(obj.getEnergyPoints());
	setAttackDamage(obj.getAttackDamage());
}

FragTrap &FragTrap::operator = (const FragTrap &obj)
{
	std::cout << "FragTrap::Copy assignment operator called" << std::endl;
	setName(obj.getName());
	setHitPoints(obj.getHitPoints());
	setEnergyPoints(obj.getEnergyPoints());
	setAttackDamage(obj.getAttackDamage());
	return (*this);
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap: How about a celebratory high five?" << std::endl;
}
