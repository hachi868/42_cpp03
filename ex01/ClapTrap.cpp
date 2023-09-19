#include <iostream>
#include "ClapTrap.hpp"

const unsigned int ClapTrap::_hitPointsDefault = 10;
const unsigned int ClapTrap::_energyPointsDefault = 10;
const unsigned int ClapTrap::_attackDamageDefault = 0;

ClapTrap::ClapTrap(void) : _name("unknown"), _hitPoints(_hitPointsDefault), _energyPoints(_energyPointsDefault), _attackDamage(_attackDamageDefault)
{
	std::cout << "[ClapTrap] Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(_hitPointsDefault), _energyPoints(_energyPointsDefault), _attackDamage(_attackDamageDefault)
{
	std::cout << "[ClapTrap] Constructor called(name)" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name, unsigned int _hitPoints, unsigned int _energyPoints, unsigned int _attackDamage)
	: _name(name), _hitPoints(_hitPoints), _energyPoints(_energyPoints), _attackDamage(_attackDamage)
{
	std::cout << "[ClapTrap] Constructor called(inherit)" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "[ClapTrap] Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj) : _name(obj._name), _hitPoints(obj._hitPoints), _energyPoints(obj._energyPoints), _attackDamage(obj._attackDamage)
{
	std::cout << "[ClapTrap] Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &obj)
{
	std::cout << "[ClapTrap] Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_hitPoints = obj._hitPoints;
		this->_energyPoints = obj._energyPoints;
		this->_attackDamage = obj._attackDamage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "([ClapTrap::attack] " << this->_name << " has no hit points. can't attack.)" << std::endl;
		return ;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "([ClapTrap::attack] " << this->_name << " has no energy points. can't attack.)" << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "[ClapTrap::attack] " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage! energyPoints--;" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int damage;

	if (this->_hitPoints == 0)
	{
		std::cout << "([ClapTrap::takeDamage] " << this->_name << " has no hit points.)" << std::endl;
		return ;
	}
	damage = (this->_hitPoints < amount) ? this->_hitPoints : amount;
	this->_hitPoints -= damage;
	std::cout << "[ClapTrap::takeDamage] " << this->_name << " take damage. " << damage << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "([ClapTrap::beRepaired] " << this->_name << " has no hit points. can't repaire.)" << std::endl;
		return;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "([ClapTrap::beRepaired] " << this->_name << " has no energyPoints. can't repaire.)" << std::endl;
		return ;
	}
	this->_energyPoints--;
	this->_hitPoints += amount;
	std::cout << "[ClapTrap::beRepaired] " << this->_name << " be repaired." << amount << " points of HitPoint is repaired! energyPoints--;" << std::endl;
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

std::ostream &operator << (std::ostream &c_out, const ClapTrap &ct)
{
	c_out << "[ " << ct.getName() << " ] " << ct.getHitPoints() << "/" << ct.getEnergyPoints() << "/" << ct.getAttackDamage() << std::endl;
	return (c_out);
}
