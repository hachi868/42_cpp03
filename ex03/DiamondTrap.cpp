#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("unknown_clap_name"), ScavTrap("unknown"), FragTrap("unknown"), _name("unknown")
{
	std::cout << "[DiamondTrap] Default constructor called" << std::endl;
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	//showInfo();
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), _name(name)
{
	std::cout << "[DiamondTrap] Constructor called" << std::endl;
	//showInfo();
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap] Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj)
{
	std::cout << "[DiamondTrap] Copy constructor called" << std::endl;
	std::cout << "[DiamondTrap] obj.getName()" << obj.getName() << std::endl;
	setName("hhhhhhhh");
	setHitPoints(obj.getHitPoints());
	setEnergyPoints(obj.getEnergyPoints());
	setAttackDamage(obj.getAttackDamage());
	std::cout << "[DiamondTrap] this->getName()" << this->getName() << std::endl;
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

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << this->_name << ". ClapTrap name is " << ClapTrap::getName() << "." << std::endl;
	//std::cout << &(this->_name) << " / " << &(ClapTrap::_name) << std::endl;
}
