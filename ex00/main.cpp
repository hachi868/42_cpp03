#include <iostream>
#include "ClapTrap.hpp"

__attribute__((destructor)) static void destructor()
{
	system("leaks -q clapTrap");
}

int main( void ) {
	ClapTrap ct0("name_ct0");
	std::string target = "target";
	std::cout << "-----" << std::endl;

	ClapTrap ct1(ct0);
	std::cout << "[" << ct1.getName() << "] hitPoints: " << ct1.getHitPoints() << " / getEnergyPoints: " << ct1.getEnergyPoints() << std::endl;
	ct1.attack(target);
	std::cout << "[" << ct1.getName() << "] hitPoints: " << ct1.getHitPoints() << " / getEnergyPoints: " << ct1.getEnergyPoints() << std::endl;
	ct1.attack(target);
	std::cout << "[" << ct1.getName() << "] hitPoints: " << ct1.getHitPoints() << " / getEnergyPoints: " << ct1.getEnergyPoints() << std::endl;
	ct1.takeDamage(5);
	std::cout << "[" << ct1.getName() << "] hitPoints: " << ct1.getHitPoints() << " / getEnergyPoints: " << ct1.getEnergyPoints() << std::endl;
	ct1.takeDamage(5);
	std::cout << "[" << ct1.getName() << "] hitPoints: " << ct1.getHitPoints() << " / getEnergyPoints: " << ct1.getEnergyPoints() << std::endl;
	ct1.beRepaired(5);
	std::cout << "[" << ct1.getName() << "] hitPoints: " << ct1.getHitPoints() << " / getEnergyPoints: " << ct1.getEnergyPoints() << std::endl;
	ct1.attack(target);
	std::cout << "[" << ct1.getName() << "] hitPoints: " << ct1.getHitPoints() << " / getEnergyPoints: " << ct1.getEnergyPoints() << std::endl;
	ct1.attack(target);
	std::cout << "[" << ct1.getName() << "] hitPoints: " << ct1.getHitPoints() << " / getEnergyPoints: " << ct1.getEnergyPoints() << std::endl;
	ct1.attack(target);
	std::cout << "[" << ct1.getName() << "] hitPoints: " << ct1.getHitPoints() << " / getEnergyPoints: " << ct1.getEnergyPoints() << std::endl;
	ct1.attack(target);
	std::cout << "[" << ct1.getName() << "] hitPoints: " << ct1.getHitPoints() << " / getEnergyPoints: " << ct1.getEnergyPoints() << std::endl;
	ct1.attack(target);
	std::cout << "[" << ct1.getName() << "] hitPoints: " << ct1.getHitPoints() << " / getEnergyPoints: " << ct1.getEnergyPoints() << std::endl;
	ct1.attack(target);
	std::cout << "[" << ct1.getName() << "] hitPoints: " << ct1.getHitPoints() << " / getEnergyPoints: " << ct1.getEnergyPoints() << std::endl;
	ct1.attack(target);
	std::cout << "[" << ct1.getName() << "] hitPoints: " << ct1.getHitPoints() << " / getEnergyPoints: " << ct1.getEnergyPoints() << std::endl;
	ct1.attack(target);
	std::cout << "[" << ct1.getName() << "] hitPoints: " << ct1.getHitPoints() << " / getEnergyPoints: " << ct1.getEnergyPoints() << std::endl;
	std::cout << "-----" << std::endl;

	ClapTrap ct2 = ct0;
	std::cout << "[" << ct2.getName() << "] hitPoints: " << ct2.getHitPoints() << " / getEnergyPoints: " << ct2.getEnergyPoints() << std::endl;
	std::cout << "-----" << std::endl;

	ClapTrap ct3 = ClapTrap("name_ct3");
	std::cout << "[" << ct3.getName() << "] hitPoints: " << ct3.getHitPoints() << " / getEnergyPoints: " << ct3.getEnergyPoints() << std::endl;
	std::cout << "-----" << std::endl;

	ClapTrap *ct4 = new ClapTrap("name_ct4");
	std::cout << "[" << ct4->getName() << "] hitPoints: " << ct4->getHitPoints() << " / getEnergyPoints: " << ct4->getEnergyPoints() << std::endl;
	delete ct4;
	std::cout << "-----" << std::endl;
	return (0);
}