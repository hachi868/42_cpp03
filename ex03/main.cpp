#include <iostream>
#include "DiamondTrap.hpp"

__attribute__((destructor)) static void destructor()
{
	system("leaks -q ex03");
}

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
	std::cout << "-----" << std::endl;

	DiamondTrap dt2 = dt0;
	dt2.whoAmI();
	dt2.ScavTrap::guardGate();
	dt2.FragTrap::highFivesGuys();
	std::cout << "-----" << std::endl;

	DiamondTrap dt3 = DiamondTrap("name_dt3");
	dt3.whoAmI();
	dt3.ScavTrap::guardGate();
	dt3.FragTrap::highFivesGuys();
	std::cout << "-----" << std::endl;

	DiamondTrap *dt4 = new DiamondTrap("name_dt4");
	dt4->whoAmI();
	dt4->ScavTrap::guardGate();
	dt4->FragTrap::highFivesGuys();
	delete dt4;
	std::cout << "-----" << std::endl;

	return (0);
}