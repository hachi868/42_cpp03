#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("unknown_clap_name"), ScavTrap(false, true, false), FragTrap(true, false, true), _name("unknown")
{
	std::cout << "[DiamondTrap] Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(false, true, false), FragTrap(true, false, true), _name(name)
{
	std::cout << "[DiamondTrap] Constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap] Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) : ClapTrap(obj.getName()), ScavTrap(false, true, false), FragTrap(true, false, true), _name(obj.getName())
{
	std::cout << "[DiamondTrap] Copy constructor called" << std::endl;
	*this = obj;
}

DiamondTrap &DiamondTrap::operator = (const DiamondTrap &obj)
{
	std::cout << "[DiamondTrap] Copy assignment operator called" << std::endl;
	this->_name = obj._name;
	this->ClapTrap::_name = obj.ClapTrap::_name;
	this->setHitPoints(obj.getHitPoints());
	this->setEnergyPoints(obj.getEnergyPoints());
	this->setAttackDamage(obj.getAttackDamage());
	return (*this);
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << this->_name << ". ClapTrap name is " << this->ClapTrap::getName() << "." << std::endl;
	//std::cout << &(this->_name) << " / " << &(ClapTrap::_name) << std::endl;
}

void DiamondTrap::showInfo(void)
{
	std::cout << "[ " << this->_name << " / " << this->ClapTrap::_name << " ] " << this->getHitPoints() << "/" << this->getEnergyPoints() << "/" << this->getAttackDamage() << std::endl;
}
