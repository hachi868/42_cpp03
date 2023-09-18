#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : _modeGuardGate(false)
{
	std::cout << "[ScavTrap] Default constructor called" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string	name) : _modeGuardGate(false)
{
	std::cout << "[ScavTrap] Constructor called" << std::endl;
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap] Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : _modeGuardGate(false)
{
	std::cout << "[ScavTrap] Copy constructor called" << std::endl;
	*this = obj;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &obj)
{
	std::cout << "[ScavTrap] Copy assignment operator called" << std::endl;
	this->setName(obj.getName());
	this->setHitPoints(obj.getHitPoints());
	this->setEnergyPoints(obj.getEnergyPoints());
	this->setAttackDamage(obj.getAttackDamage());
	this->setModeGuardGate(obj.getModeGuardGate());
	return (*this);
}

void ScavTrap::guardGate()
{
	if (this->getModeGuardGate())
		std::cout << "([ScavTrap::guardGate] " << this->getName() << " : guardGate mode is already ON )" << std::endl;
	else
	{
		this->setModeGuardGate(true);
		std::cout << "[ScavTrap::guardGate] " << this->getName() << " : guardGate mode ON " << std::endl;
	}
}

bool ScavTrap::getModeGuardGate() const
{
	return (this->_modeGuardGate);
}

void ScavTrap::setModeGuardGate(bool modeGuardGate)
{
	this->_modeGuardGate = modeGuardGate;
}
