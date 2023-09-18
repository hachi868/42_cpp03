#include <iostream>
#include "ClapTrap.hpp"

__attribute__((destructor)) static void destructor()
{
	system("leaks -q clapTrap");
}

void testLoop(ClapTrap &ct) {
	(void)ct;
//	int i = 0;
//	std::string target = "target";
//
//	std::cout << "inited value:" << std::endl;
//	ct.showInfo();
//	std::cout << std::endl;
//	while (i < 10)
//	{
//		if (i == 2 || i == 5 || i == 8)
//			ct.takeDamage(5);
//		else if (i == 3 || i == 7)
//			ct.beRepaired(5);
//		else
//			ct.attack(target);
//		ct.showInfo();
//		i++;
//	}
	std::cout << "-----" << std::endl;
}

int main( void ) {
	ClapTrap ct00;
	testLoop(ct00);
	std::cout << "[test0] name constructor" << std::endl;
	ClapTrap ct0("name_ct0");
	testLoop(ct0);

	std::cout << "[test1] name constructor" << std::endl;
	ClapTrap ct1(ct0);
	testLoop(ct1);

	std::cout << "[test2] name constructor" << std::endl;
	ClapTrap ct2 = ct0;
	testLoop(ct2);

	std::cout << "[test3] name constructor" << std::endl;
	ClapTrap ct3 = ClapTrap("name_ct3");
	testLoop(ct3);

	std::cout << "[test4] name constructor" << std::endl;
	ClapTrap *ct4 = new ClapTrap("name_ct4");
	testLoop(*ct4);
	delete ct4;
	return (0);
}