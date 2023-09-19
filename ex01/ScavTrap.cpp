#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

const unsigned int ScavTrap::_hitPointsDefault = 100;
const unsigned int ScavTrap::_energyPointsDefault = 50;
const unsigned int ScavTrap::_attackDamageDefault = 20;

ScavTrap::ScavTrap() : ClapTrap("unknown", _hitPointsDefault, _energyPointsDefault, _attackDamageDefault), _modeGuardGate(false)
{
	std::cout << "[ScavTrap] Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name, _hitPointsDefault, _energyPointsDefault, _attackDamageDefault), _modeGuardGate(false)
{
	std::cout << "[ScavTrap] Constructor called(name)" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap] Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj), _modeGuardGate(obj._modeGuardGate)
{
	std::cout << "[ScavTrap] Copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &obj)
{
	std::cout << "[ScavTrap] Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		ClapTrap::operator = (obj);
		this->_modeGuardGate = obj._modeGuardGate;
	}
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "([ScavTrap::attack] " << this->_name << " has no hit points. can't attack.)" << std::endl;
		return;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "([ScavTrap::attack] " << this->_name << " has no energy points. can't attack.)" << std::endl;
		return;
	}
	this->_energyPoints--;
	std::cout << "[ScavTrap::attack] " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage! energyPoints--;" << std::endl;
}

void ScavTrap::guardGate()
{
	if (this->_modeGuardGate)
		std::cout << "([ScavTrap::guardGate] " << this->_name << " : guardGate mode is already ON )" << std::endl;
	else
	{
		this->_modeGuardGate = true;
		std::cout << "[ScavTrap::guardGate] " << this->_name << " : guardGate mode ON " << std::endl;
	}
}
