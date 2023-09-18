#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("unknown"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "[ClapTrap] Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string	name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "[ClapTrap] Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "[ClapTrap] Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	std::cout << "[ClapTrap] Copy constructor called" << std::endl;
	*this = obj;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &obj)
{
	std::cout << "[ClapTrap] Copy assignment operator called" << std::endl;
	this->setName(obj.getName());
	this->setHitPoints(obj.getHitPoints());
	this->setEnergyPoints(obj.getEnergyPoints());
	this->setAttackDamage(obj.getAttackDamage());
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->getEnergyPoints() == 0)
	{
		std::cout << "[ClapTrap::attack] " << this->_name << " has no energy points. can't attack." << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "[ClapTrap::attack] " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage! energyPoints--;" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int damage;

	if (this->getHitPoints() == 0)
	{
		std::cout << "([ClapTrap::takeDamage] " << this->getName() << " has 0 points of HitPoint.)" << std::endl;
		return ;
	}
	damage = (this->getHitPoints() < amount) ? this->getHitPoints() : amount;
	this->_hitPoints -= damage;
	std::cout << "[ClapTrap::takeDamage] " << this->getName() << " take damage. " << damage << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getEnergyPoints() == 0)
	{
		std::cout << "([ClapTrap::beRepaired] " << this->getName() << " has no energyPoints. can't repaire.)" << std::endl;
		return ;
	}
	this->_energyPoints--;
	this->_hitPoints += amount;
	std::cout << "[ClapTrap::beRepaired] " << this->getName() << " be repaired." << amount << " points of HitPoint is repaired! energyPoints--;" << std::endl;
}

std::string ClapTrap::getName(void) const
{
	return (this->_name);
}

unsigned int ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

unsigned int ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

unsigned int ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

void ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void ClapTrap::setHitPoints(unsigned int amount)
{
	this->_hitPoints = amount;
}

void ClapTrap::setEnergyPoints(unsigned int amount)
{
	this->_energyPoints = amount;
}

void ClapTrap::setAttackDamage(unsigned int amount)
{
	this->_attackDamage = amount;
}

void ClapTrap::showInfo(void)
{
	std::cout << "[ " << this->getName() << " ] " << this->getHitPoints() << "/" << this->getEnergyPoints() << "/" << this->getAttackDamage() << std::endl;
}
