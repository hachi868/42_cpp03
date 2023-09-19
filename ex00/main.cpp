#include <iostream>
#include "ClapTrap.hpp"

__attribute__((destructor)) static void destructor()
{
	system("leaks -q claptrap");
}

void testLoop(ClapTrap &ct) {
	int i = 0;
	std::string target = "target";

	std::cout << "initiel value: ";
	std::cout << ct;
	std::cout << std::endl;
	while (i < 10)
	{
		if (i == 2 || i == 5 || i == 8)
			ct.takeDamage(5);
		else if (i == 3 || i == 7)
			ct.beRepaired(5);
		else
			ct.attack(target);
		std::cout << ct;
		i++;
	}
	std::cout << "-----" << std::endl;
}

int main( void )
{
	// std::cout << "[test0] Default constructor" << std::endl;
	// ClapTrap ct0;
	// testLoop(ct0);

	std::cout << "[test1] name constructor" << std::endl;
	ClapTrap ct1("name_ct1");
	testLoop(ct1);

	// std::cout << "[test2] Copy constructor" << std::endl;
	// ClapTrap ct2(ct1);
	// testLoop(ct2);

	// std::cout << "[test3] Copy constructor" << std::endl;
	// ClapTrap &ct3a = ct0;
	// ClapTrap ct3 = ct3a;
	// testLoop(ct3);

	// std::cout << "[test4] Copy assignment & name constructor" << std::endl;
	// ClapTrap ct4 = ClapTrap("name_ct4");
	// testLoop(ct4);

	// std::cout << "[test5] new" << std::endl;
	// ClapTrap *ct5 = new ClapTrap("name_ct5");
	// testLoop(*ct5);
	// delete ct5;
	return (0);
}