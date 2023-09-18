#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "[FragTrap] Default constructor called" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(std::string	name)
{
	std::cout << "[FragTrap] Constructor called" << std::endl;
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(bool isHp, bool isMp, bool isAd)
{
	std::cout << "[FragTrap] Constructor called (for DiamondTrap)" << std::endl;
	if (isHp)
		this->setHitPoints(100);
	if (isMp)
		this->setEnergyPoints(100);
	if (isAd)
		this->setAttackDamage(30);
}

FragTrap::~FragTrap()
{
	std::cout << "[FragTrap] Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj)
{
	std::cout << "[FragTrap] Copy constructor called" << std::endl;
	this->setName(obj.getName());
	this->setHitPoints(obj.getHitPoints());
	this->setEnergyPoints(obj.getEnergyPoints());
	this->setAttackDamage(obj.getAttackDamage());
}

FragTrap &FragTrap::operator = (const FragTrap &obj)
{
	std::cout << "[FragTrap] Copy assignment operator called" << std::endl;
	this->setName(obj.getName());
	this->setHitPoints(obj.getHitPoints());
	this->setEnergyPoints(obj.getEnergyPoints());
	this->setAttackDamage(obj.getAttackDamage());
	return (*this);
}

void FragTrap::highFivesGuys()
{
	std::cout << "[FragTrap::highFivesGuys] How about a celebratory high five?" << std::endl;
}
