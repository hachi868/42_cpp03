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

ScavTrap::ScavTrap(bool isHp, bool isMp, bool isAd, std::string name) : _modeGuardGate(false)
{
	std::cout << "[ScavTrap] Constructor called (for inherit)" << std::endl;
	//this->setName(name);
	this->_name = name;
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
	setName(obj.getName());
	setHitPoints(obj.getHitPoints());
	setEnergyPoints(obj.getEnergyPoints());
	setAttackDamage(obj.getAttackDamage());
}

ScavTrap &ScavTrap::operator = (const ScavTrap &obj)
{
	std::cout << "[ScavTrap] Copy assignment operator called" << std::endl;
	setName(obj.getName());
	setHitPoints(obj.getHitPoints());
	setEnergyPoints(obj.getEnergyPoints());
	setAttackDamage(obj.getAttackDamage());
	this->_modeGuardGate = obj._modeGuardGate;
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (this->getEnergyPoints() == 0)
	{
		std::cout << "[ScavTrap::attack] " << this->_name << " has no energy points. can't attack." << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "[ScavTrap::attack] " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage! energyPoints--;" << std::endl;
}

void ScavTrap::guardGate()
{
	this->_modeGuardGate = true;
	std::cout << "[ScavTrap::guardGate] " << this->_name << " : guardGate mode ON " << std::endl;
}

bool ScavTrap::getModeGuardGate()
{
	return (this->_modeGuardGate);
}
