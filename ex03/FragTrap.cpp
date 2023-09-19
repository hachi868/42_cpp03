#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

const unsigned int FragTrap::_hitPointsDefault = 100;
const unsigned int FragTrap::_energyPointsDefault = 100;
const unsigned int FragTrap::_attackDamageDefault = 30;

FragTrap::FragTrap() : ClapTrap("unknown", _hitPointsDefault, _energyPointsDefault, _attackDamageDefault)
{
	std::cout << "[FragTrap] Default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name, _hitPointsDefault, _energyPointsDefault, _attackDamageDefault)
{
	std::cout << "[FragTrap] Constructor called(name)" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "[FragTrap] Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
	std::cout << "[FragTrap] Copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator = (const FragTrap &obj)
{
	std::cout << "[FragTrap] Copy assignment operator called" << std::endl;
	if (this != &obj)
		ClapTrap::operator = (obj);
	return (*this);
}

void FragTrap::highFivesGuys()
{
	std::cout << "[FragTrap::highFivesGuys] How about a celebratory high five?" << std::endl;
}
