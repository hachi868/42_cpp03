#include <iostream>
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap dt0("name_dt0");
	DiamondTrap dt1(dt0);
	std::string target = "target";

	dt1.whoAmI();
	dt1.ScavTrap::guardGate();
	dt1.FragTrap::highFivesGuys();
	std::cout << "-----" << std::endl;
	dt1.showInfo();
	dt1.attack(target);
	dt1.showInfo();
	dt1.attack(target);
	dt1.showInfo();
	dt1.takeDamage(5);
	dt1.showInfo();
	dt1.takeDamage(5);
	dt1.showInfo();
	dt1.beRepaired(5);
	dt1.showInfo();
	dt1.attack(target);
	dt1.showInfo();
	dt1.takeDamage(5);
	dt1.showInfo();
	dt1.takeDamage(5);
	dt1.showInfo();
	dt1.takeDamage(5);
	dt1.showInfo();
	dt1.attack(target);
	dt1.showInfo();
	dt1.attack(target);
	dt1.showInfo();
	dt1.takeDamage(5);
	dt1.showInfo();
	dt1.attack(target);
	dt1.showInfo();

	return (0);
}