#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("unknown_clap_name"), ScavTrap("unknown"), FragTrap("unknown"), _name("unknown")
{
	std::cout << "[DiamondTrap] Constructor called(Default)" << std::endl;
	std::cout << this->getHitPoints() << " " << this->getEnergyPoints() << " " << this->getAttackDamage() << " " << std::endl;
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	std::cout << this->getHitPoints() << " " << this->getEnergyPoints() << " " << this->getAttackDamage() << " " << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), _name(name)
{
	std::cout << ClapTrap::_hitPoints << " " << ClapTrap::_energyPoints << " " << ClapTrap::_attackDamage << " :define DiamondTrap" << std::endl;
	std::cout << this->_hitPoints << " " << this->_energyPoints << " " << this->_attackDamage << "  :define DiamondTrap" << std::endl;
	std::cout << this->_name << " / " << &(this->_name) << " ///" << ClapTrap::_name << " / " << &(ClapTrap::_name) << std::endl;
	std::cout << "[DiamondTrap] Constructor called" << std::endl;
	std::cout << ClapTrap::_hitPoints << " " << ClapTrap::_energyPoints << " " << ClapTrap::_attackDamage << " :define DiamondTrap" << std::endl;
	std::cout << this->_hitPoints << " " << this->_energyPoints << " " << this->_attackDamage << "  :define DiamondTrap" << std::endl;
	std::cout << &(ClapTrap::_hitPoints) << " " << &(ClapTrap::_energyPoints) << " " << &(ClapTrap::_attackDamage) << " :define DiamondTrap" << std::endl;
	std::cout << &(this->_hitPoints) << " " << &(this->_energyPoints) << " " << &(this->_attackDamage) << "  :define DiamondTrap" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap] Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj)
{
	std::cout << "[DiamondTrap] Copy constructor called" << std::endl;
	setName(obj.getName());
	setHitPoints(obj.getHitPoints());
	setEnergyPoints(obj.getEnergyPoints());
	setAttackDamage(obj.getAttackDamage());
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj)
{
	std::cout << "[DiamondTrap] Copy assignment operator called" << std::endl;
	setName(obj.getName());
	setHitPoints(obj.getHitPoints());
	setEnergyPoints(obj.getEnergyPoints());
	setAttackDamage(obj.getAttackDamage());
	return (*this);
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << this->_name << ". ClapTrap name is " << ClapTrap::getName() << "." << std::endl;
}
