#include <iostream>
#include "DiamondTrap.hpp"

int main(void)
{
	std::string target = "target";

	DiamondTrap dt0("name_dt0");
	dt0.whoAmI();
	dt0.ScavTrap::guardGate();
	dt0.FragTrap::highFivesGuys();
	std::cout << "-----" << std::endl;

	DiamondTrap dt1(dt0);
	dt1.whoAmI();
	dt1.ScavTrap::guardGate();
	dt1.FragTrap::highFivesGuys();
	std::cout << "-----" << std::endl;

	DiamondTrap dt2 = dt0;
	dt2.whoAmI();
	dt2.ScavTrap::guardGate();
	dt2.FragTrap::highFivesGuys();
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
	dt1.whoAmI();

	return (0);
}