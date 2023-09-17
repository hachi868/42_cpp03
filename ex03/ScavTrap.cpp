#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : _modeGuardGate(false)
{
	std::cout << ClapTrap::_hitPoints << " " << ClapTrap::_energyPoints << " " << ClapTrap::_attackDamage << " :define ScavTrap" << std::endl;
	std::cout << this->_hitPoints << " " << this->_energyPoints << " " << this->_attackDamage << "  :define ScavTrap" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap " << this->getName() << " is created. (default constructor)" << std::endl;
	std::cout << ClapTrap::_hitPoints << " " << ClapTrap::_energyPoints << " " << ClapTrap::_attackDamage << " :define ScavTrap" << std::endl;
	std::cout << this->_hitPoints << " " << this->_energyPoints << " " << this->_attackDamage << "  :define ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(std::string	name) : _modeGuardGate(false)
{
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap " << this->getName() << " is created." << std::endl;
	std::cout << this->getHitPoints() << " " << this->getEnergyPoints() << " " << this->getAttackDamage() << " " << std::endl;
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

void ScavTrap::attack(const std::string& target)
{
	if (this->getEnergyPoints() == 0)
	{
		std::cout << "ScavTrap " << this->_name << " has no energy points. can't attack." << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage! energyPoints--;" << std::endl;
}

void ScavTrap::guardGate()
{
	this->_modeGuardGate = true;
	std::cout << "ScavTrap " << this->getName() << " : guardGate mode ON" << std::endl;
}

bool ScavTrap::getModeGuardGate()
{
	return (this->_modeGuardGate);
}
