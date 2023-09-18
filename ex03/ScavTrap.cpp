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

ScavTrap::ScavTrap(bool isHp, bool isMp, bool isAd) : _modeGuardGate(false)
{
	std::cout << "[ScavTrap] Constructor called (for DiamondTrap)" << std::endl;
	if (isHp)
		this->setHitPoints(100);
	if (isMp)
		this->setEnergyPoints(50);
	if (isAd)
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

void ScavTrap::attack(const std::string& target)
{
	if (this->getEnergyPoints() == 0)
	{
		std::cout << "[ScavTrap::attack] " << this->_name << " has no energy points. can't attack." << std::endl;
		return ;
	}
	this->setEnergyPoints(this->getEnergyPoints() - 1);
	std::cout << "[ScavTrap::attack] " << this->_name << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage! energyPoints--;" << std::endl;
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
