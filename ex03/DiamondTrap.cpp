#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("unknown_clap_name", FragTrap::_hitPointsDefault, ScavTrap::_energyPointsDefault, FragTrap::_attackDamageDefault), _name("unknown")
{
	std::cout << "[DiamondTrap] Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name", FragTrap::_hitPointsDefault, ScavTrap::_energyPointsDefault, FragTrap::_attackDamageDefault), _name(name)
{
	std::cout << "[DiamondTrap] Constructor called(name)" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap] Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) : ClapTrap(obj)
{
	std::cout << "[DiamondTrap] Copy constructor called" << std::endl;
	this->_name = obj._name;
}

DiamondTrap &DiamondTrap::operator = (const DiamondTrap &obj)
{
	std::cout << "[DiamondTrap] Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		FragTrap::operator = (obj);
		ScavTrap::operator = (obj);
		this->_name = obj._name;
	}
	return (*this);
} 

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << this->_name << ". ClapTrap name is " << this->ClapTrap::_name << "." << std::endl;
	//std::cout << &(this->_name) << " / " << &(ClapTrap::_name) << std::endl;
}
