#include <iostream>
//#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

ScavTrap::ScavTrap() : _modeGuardGate(false)
{
	std::cout << "[ScavTrap] Default constructor called" << std::endl;
	std::string name_result = this->getName();
	std::string name_rm = "_clap_name";
	size_t pos = name_result.find(name_rm);
	if (pos != std::string::npos)
	{
		_name = name_result.replace(pos, name_rm.length(), "");
		// this->setHitPoints(100);
		this->setEnergyPoints(50);
		// this->setAttackDamage(20);
	}
	else
	{
		this->setHitPoints(100);
		this->setEnergyPoints(50);
		this->setAttackDamage(20);
	}
	//showInfo();
}

ScavTrap::ScavTrap(std::string	name) : _modeGuardGate(false)
{
	std::cout << "[ScavTrap] Constructor called" << std::endl;
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	// showInfo();
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
