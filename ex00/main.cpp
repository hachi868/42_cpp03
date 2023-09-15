#include <iostream>
#include "ClapTrap.hpp"

int main( void ) {
	ClapTrap ct1("name_ct1");
	std::string target = "target";

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
	return (0);
}