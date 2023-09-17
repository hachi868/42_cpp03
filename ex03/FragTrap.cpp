#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "[FragTrap] Default constructor called" << std::endl;
	if (this->getName().find("_clap_name"))
	{
		this->setHitPoints(100);
		// this->setEnergyPoints(100);
		this->setAttackDamage(30);
	}
	else
	{
		this->setHitPoints(100);
		this->setEnergyPoints(100);
		this->setAttackDamage(30);
	}
	//showInfo();
}

FragTrap::FragTrap(std::string	name)
{
	std::cout << "[FragTrap] Constructor called" << std::endl;
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	// showInfo();
}

FragTrap::~FragTrap()
{
	std::cout << "[FragTrap] Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj)
{
	std::cout << "[FragTrap] Copy constructor called" << std::endl;
	setName(obj.getName());
	setHitPoints(obj.getHitPoints());
	setEnergyPoints(obj.getEnergyPoints());
	setAttackDamage(obj.getAttackDamage());
}

FragTrap &FragTrap::operator = (const FragTrap &obj)
{
	std::cout << "[FragTrap] Copy assignment operator called" << std::endl;
	setName(obj.getName());
	setHitPoints(obj.getHitPoints());
	setEnergyPoints(obj.getEnergyPoints());
	setAttackDamage(obj.getAttackDamage());
	return (*this);
}

void FragTrap::highFivesGuys()
{
	std::cout << "[FragTrap::highFivesGuys] How about a celebratory high five?" << std::endl;
}
