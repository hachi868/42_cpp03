

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string	name)
{
	name = name;
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
}

ClapTrap::~ClapTrap()
{

}

void ClapTrap::attack(const std::string& target)
{

}

void ClapTrap::takeDamage(unsigned int amount)
{

}

void ClapTrap::beRepaired(unsigned int amount)
{

}
