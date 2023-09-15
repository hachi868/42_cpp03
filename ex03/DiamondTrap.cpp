#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "≈.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	setHitPoints(getHitPoints());
	setEnergyPoints(getEnergyPoints());
	setAttackDamage(getAttackDamage());
	std::cout << "DiamondTrap " << this->getName() << " is created. (default constructor)" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(std::string.strcat(name, "_clap_name")), FragTrap(name), FragTrap(name), _name(name)
{
	setName(name);
	setHitPoints(getHitPoints());
	setEnergyPoints(getEnergyPoints());
	setAttackDamage(getAttackDamage());
	std::cout << "DiamondTrap " << this->getName() << " is created." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Bye, DiamondTrap " << this->getName() << "." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj)
{
	std::cout << "DiamondTrap::Copy constructor called" << std::endl;
	setName(obj.getName());
	setHitPoints(obj.getHitPoints());
	setEnergyPoints(obj.getEnergyPoints());
	setAttackDamage(obj.getAttackDamage());
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj)
{
	std::cout << "DiamondTrap::Copy assignment operator called" << std::endl;
	setName(obj.getName());
	setHitPoints(obj.getHitPoints());
	setEnergyPoints(obj.getEnergyPoints());
	setAttackDamage(obj.getAttackDamage());
	return (*this);
}

std::string DiamondTrap::getName(void) const
{
	return (ScavTrap::getName());
}

unsigned int DiamondTrap::getHitPoints(void) const
{
	return (FragTrap::getHitPoints());
}
unsigned int DiamondTrap::getEnergyPoints(void) const
{
	return (ScavTrap::getEnergyPoints());
}
unsigned int DiamondTrap::getAttackDamage(void) const
{
	return (FragTrap::getAttackDamage());
}
void DiamondTrap::setName(std::string name)
{
	ScavTrap::setName(name);
}
void DiamondTrap::setHitPoints(unsigned int amount)
{
	FragTrap::setHitPoints(amount);
}
void DiamondTrap::setEnergyPoints(unsigned int amount)
{
	ScavTrap::setEnergyPoints(amount);
}
void DiamondTrap::setAttackDamage(unsigned int amount)
{
	FragTrap::setAttackDamage(amount);
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount)
{
	ScavTrap::takeDamage(amount);
}

void DiamondTrap::beRepaired(unsigned int amount)
{
	FragTrap::beRepaired(amount);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << this->_name << ". ClapTrap name is " << this->_name << "." << std::endl;
}
