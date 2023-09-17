#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << ClapTrap::_hitPoints << " " << ClapTrap::_energyPoints << " " << ClapTrap::_attackDamage << " :define FragTrap" << std::endl;
	std::cout << this->_hitPoints << " " << this->_energyPoints << " " << this->_attackDamage << "  :define FragTrap" << std::endl;
	this->setHitPoints(100);
	//this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap " << this->getName() << " is created. (default constructor)" << std::endl;
	std::cout << ClapTrap::_hitPoints << " " << ClapTrap::_energyPoints << " " << ClapTrap::_attackDamage << " :define FragTrap" << std::endl;
	std::cout << this->_hitPoints << " " << this->_energyPoints << " " << this->_attackDamage << "  :define FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string	name)
{
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap " << this->getName() << " is created." << std::endl;
	std::cout << this->getHitPoints() << " " << this->getEnergyPoints() << " " << this->getAttackDamage() << " " << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Bye, FragTrap " << this->getName() << "." << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj)
{
	std::cout << "FragTrap::Copy constructor called" << std::endl;
	setName(obj.getName());
	setHitPoints(obj.getHitPoints());
	setEnergyPoints(obj.getEnergyPoints());
	setAttackDamage(obj.getAttackDamage());
}

FragTrap &FragTrap::operator = (const FragTrap &obj)
{
	std::cout << "FragTrap::Copy assignment operator called" << std::endl;
	setName(obj.getName());
	setHitPoints(obj.getHitPoints());
	setEnergyPoints(obj.getEnergyPoints());
	setAttackDamage(obj.getAttackDamage());
	return (*this);
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap: How about a celebratory high five?" << std::endl;
}
