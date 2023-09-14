#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string	name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " is created." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Bye, ClapTrap " << this->_name << "." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
	: _name(obj._name), _hitPoints(obj._hitPoints), _energyPoints(obj._energyPoints), _attackDamage(obj._attackDamage)
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = obj._name;
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->getEnergyPoints() == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy points. can't attack." << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int damage;

	damage = (this->getHitPoints() < amount) ? this->getHitPoints() : amount;
	this->_hitPoints -= damage;
	std::cout << "ClapTrap " << this->_name << " take damage." << damage << "point." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getEnergyPoints() == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy points. can't repaire." << std::endl;
		return ;
	}
	this->_energyPoints--;
	this->_hitPoints += amount;
	std::cout << "ClapTrap " << this->_name << " be repaired." << std::endl;
}

unsigned int ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

unsigned int ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}
