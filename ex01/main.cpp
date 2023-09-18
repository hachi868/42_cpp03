#include <iostream>
#include "ScavTrap.hpp"

__attribute__((destructor)) static void destructor()
{
	system("leaks -q scavtrap");
}

void testLoop(ScavTrap &st)
{
	int i = 0;
	std::string target = "target";

	std::cout << "inited value: ";
	st.showInfo();
	std::cout << std::endl;
	while (i < 10)
	{
		if (i == 2 || i == 5 || i == 6)
			st.takeDamage(5);
		else if (i == 3 || i == 7)
			st.beRepaired(5);
		else if (i == 8)
			st.guardGate();
		else
			st.attack(target);
		st.showInfo();
		i++;
	}
	std::cout << "-----" << std::endl;
}

int main(void)
{
	// std::cout << "[test0] Default constructor" << std::endl;
	// ScavTrap st0;
	// testLoop(st0);

	std::cout << "[test1] name constructor" << std::endl;
	ScavTrap st1("name_st1");
	testLoop(st1);

	// std::cout << "[test2] Copy constructor" << std::endl;
	// ScavTrap st2(st1);
	// testLoop(st2);

	// std::cout << "[test3] Copy constructor" << std::endl;
	// ScavTrap &st3a = st0;
	// ScavTrap st3 = st3a;
	// testLoop(st3);

	// std::cout << "[test4] Copy assignment & name constructor" << std::endl;
	// ScavTrap st4 = ScavTrap("name_st4");
	// testLoop(st4);

	// std::cout << "[test5] new" << std::endl;
	// ScavTrap *st5 = new ScavTrap("name_st5");
	// testLoop(*st5);
	// delete st5;
	return (0);
}