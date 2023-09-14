#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string	name) : _modeGuardGate(false)
{
	std::cout << "ScavTrap " << this->getName() << " is created." << std::endl;
	setName(name);
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Bye, ScavTrap " << this->getName() << "." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : _modeGuardGate(false)
{
	std::cout << "ScavTrap::Copy constructor called" << std::endl;
	setName(obj.getName());
	setHitPoints(obj.getHitPoints());
	setEnergyPoints(obj.getEnergyPoints());
	setAttackDamage(obj.getAttackDamage());
}

ScavTrap &ScavTrap::operator = (const ScavTrap &obj)
{
	std::cout << "ScavTrap::Copy assignment operator called" << std::endl;
	setName(obj.getName());
	setHitPoints(obj.getHitPoints());
	setEnergyPoints(obj.getEnergyPoints());
	setAttackDamage(obj.getAttackDamage());
	this->_modeGuardGate = obj._modeGuardGate;
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap::guardGate ON" << std::endl;
}
