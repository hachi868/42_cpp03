#include <iostream>
#include "DiamondTrap.hpp"

__attribute__((destructor)) static void destructor()
{
	system("leaks -q diamondtrap");
}

void testLoop(DiamondTrap &dt)
{
	int i = 0;
	std::string target = "target";

	std::cout << "inited value: ";
	std::cout << dt;
	std::cout << std::endl;
	dt.whoAmI();
	dt.ScavTrap::guardGate();
	dt.FragTrap::highFivesGuys();
	std::cout << std::endl;
	while (i < 10)
	{
		if (i == 2 || i == 5 || i == 6)
			dt.takeDamage(5);
		else if (i == 3 || i == 7)
			dt.beRepaired(5);
		else
			dt.attack(target);
		std::cout << dt;
		i++;
	}
	std::cout << "-----" << std::endl;
}

int main(void)
{
	{
		std::cout << "[test0] Default constructor" << std::endl;
		DiamondTrap dt0;
		testLoop(dt0);

		std::cout << "[test1] name constructor" << std::endl;
		DiamondTrap dt1("name_dt1");
		testLoop(dt1);

		std::cout << "[test2] Copy constructor" << std::endl;
		DiamondTrap dt2(dt1);
		testLoop(dt2);

		std::cout << "[test3] Copy constructor" << std::endl;
		DiamondTrap &dt3a = dt0;
		DiamondTrap dt3 = dt3a;
		testLoop(dt3);
	}
	std::cout << "*-*-*-*-*-*-*" << std::endl << std::endl;
	{
		std::cout << "[test4] Copy assignment & name constructor" << std::endl;
		DiamondTrap dt4 = DiamondTrap("name_dt4");
		testLoop(dt4);
	}
	std::cout << "*-*-*-*-*-*-*" << std::endl << std::endl;
	{
		std::cout << "[test5] new" << std::endl;
		DiamondTrap *dt5 = new DiamondTrap("name_dt5");
		testLoop(*dt5);
		delete dt5;
	}
	return (0);
}