#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("unknown_clap_name"), ScavTrap(false, true, false, "unknown"), FragTrap(true, false, true), _name("unknown")
{
	std::cout << "[DiamondTrap] Default constructor called" << std::endl;
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	showInfo();
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(false, true, false, name), FragTrap(true, false, true), _name(name)
{
	std::cout << "[DiamondTrap] Constructor called" << std::endl;
	showInfo();
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap] Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) : ClapTrap(obj.getName()), ScavTrap(false, true, false, obj.ScavTrap::getName()), FragTrap(true, false, true), _name(obj.getName())
{
	std::cout << "[DiamondTrap] Copy constructor called" << std::endl;
	*this = obj;
	showInfo();
	//std::cout << "[DiamondTrap] this->getName()" << this->getName() << std::endl;
}

DiamondTrap &DiamondTrap::operator = (const DiamondTrap &obj)
{
	std::cout << "[DiamondTrap] Copy assignment operator called" << std::endl;
	this->_name = obj._name;
	this->ScavTrap::_name = obj.ScavTrap::_name;
	this->ClapTrap::_name = obj.ClapTrap::_name;
	setHitPoints(obj.getHitPoints());
	setEnergyPoints(obj.getEnergyPoints());
	setAttackDamage(obj.getAttackDamage());
	showInfo();
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


void DiamondTrap::showInfo(void)
{
	std::cout << "[ " << this->_name << " ] " << this->getHitPoints() << "/" << this->getEnergyPoints() << "/" << this->getAttackDamage() << std::endl;
}
