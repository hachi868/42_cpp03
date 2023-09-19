#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

__attribute__((destructor)) static void destructor()
{
	system("leaks -q fragtrap");
}

void testLoop(FragTrap &ft)
{
	int i = 0;
	std::string target = "target";

	std::cout << "inited value: ";
	std::cout << ft;
	std::cout << std::endl;
	while (i < 10)
	{
		if (i == 2 || i == 5 || i == 6)
			ft.takeDamage(5);
		else if (i == 3 || i == 7)
			ft.beRepaired(5);
		else if (i == 8)
			ft.highFivesGuys();
		else
			ft.attack(target);
		std::cout << ft;
		i++;
	}
	std::cout << "-----" << std::endl;
}

int main(void)
{
	{
		std::cout << "[test0] Default constructor" << std::endl;
		FragTrap ft0;
		testLoop(ft0);

		std::cout << "[test1] name constructor" << std::endl;
		FragTrap ft1("name_ft1");
		testLoop(ft1);

		std::cout << "[test2] Copy constructor" << std::endl;
		FragTrap ft2(ft1);
		testLoop(ft2);

		std::cout << "[test3] Copy constructor" << std::endl;
		FragTrap &ft3a = ft0;
		FragTrap ft3 = ft3a;
		testLoop(ft3);
	}
	std::cout << "*-*-*-*-*-*-*" << std::endl << std::endl;
	{
		std::cout << "[test4] Copy assignment & name constructor" << std::endl;
		FragTrap ft4 = FragTrap("name_ft4");
		testLoop(ft4);
	}
	std::cout << "*-*-*-*-*-*-*" << std::endl << std::endl;
	{
		std::cout << "[test5] new" << std::endl;
		FragTrap *ft5 = new FragTrap("name_ft5");
		testLoop(*ft5);
		delete ft5;
	}
	return (0);
}
