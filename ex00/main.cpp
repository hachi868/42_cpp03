#include <iostream>
#include "ClapTrap.hpp"

int main( void ) {

	ClapTrap ct1("name_ct1");
	std::string target1 = "sssss";
	std::string& target = target1;
	ct1.attack(target);
	ct1.takeDamage(5);
	ct1.beRepaired(5);
	return 0;
}