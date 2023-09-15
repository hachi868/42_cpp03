#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("unknown_clap_name"), ScavTrap(), FragTrap()
{
	std::cout << "[DiamondTrap] Constructor called(Default)" << std::endl;
	ScavTrap::setHitPoints(getHitPoints());
	setEnergyPoints(getEnergyPoints());
	setAttackDamage(getAttackDamage());
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), _name(name)
{
	std::cout << "[DiamondTrap] Constructor called" << std::endl;
	setHitPoints(getHitPoints());
	setEnergyPoints(getEnergyPoints());
	setAttackDamage(getAttackDamage());
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap] Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj)
{
	std::cout << "[DiamondTrap] Copy constructor called" << std::endl;
	setName(obj.getName());
	setHitPoints(obj.getHitPoints());
	setEnergyPoints(obj.getEnergyPoints());
	setAttackDamage(obj.getAttackDamage());
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj)
{
	std::cout << "[DiamondTrap] Copy assignment operator called" << std::endl;
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
	std::cout << "My name is " << this->_name << ". ClapTrap name is " << ClapTrap::getName() << "." << std::endl;
}
