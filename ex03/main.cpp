#include <iostream>
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap dt1("name_dt1");
	std::string target = "target";

	dt1.whoAmI();
	dt1.ScavTrap::guardGate();
	dt1.FragTrap::highFivesGuys();
	std::cout << dt1.ScavTrap::getHitPoints() << " | " << dt1.FragTrap::getEnergyPoints() << " | " << dt1.ScavTrap::getAttackDamage() << std::endl;
	std::cout << "[" << dt1.getName() << "] hitPoints: " << dt1.getHitPoints() << " / energyPoints: " << dt1.getEnergyPoints() << std::endl;
	dt1.attack(target);
	std::cout << "[" << dt1.getName() << "] hitPoints: " << dt1.getHitPoints() << " / energyPoints: " << dt1.getEnergyPoints() << std::endl;
	dt1.attack(target);
	std::cout << "[" << dt1.getName() << "] hitPoints: " << dt1.getHitPoints() << " / energyPoints: " << dt1.getEnergyPoints() << std::endl;
	dt1.takeDamage(5);
	std::cout << "[" << dt1.getName() << "] hitPoints: " << dt1.getHitPoints() << " / energyPoints: " << dt1.getEnergyPoints() << std::endl;
	dt1.takeDamage(5);
	std::cout << "[" << dt1.getName() << "] hitPoints: " << dt1.getHitPoints() << " / energyPoints: " << dt1.getEnergyPoints() << std::endl;
	dt1.beRepaired(5);
	std::cout << "[" << dt1.getName() << "] hitPoints: " << dt1.getHitPoints() << " / energyPoints: " << dt1.getEnergyPoints() << std::endl;
	dt1.attack(target);
	std::cout << "[" << dt1.getName() << "] hitPoints: " << dt1.getHitPoints() << " / energyPoints: " << dt1.getEnergyPoints() << std::endl;
	dt1.takeDamage(5);
	std::cout << "[" << dt1.getName() << "] hitPoints: " << dt1.getHitPoints() << " / energyPoints: " << dt1.getEnergyPoints() << std::endl;
	dt1.takeDamage(5);
	std::cout << "[" << dt1.getName() << "] hitPoints: " << dt1.getHitPoints() << " / energyPoints: " << dt1.getEnergyPoints() << std::endl;
	dt1.takeDamage(5);
	std::cout << "[" << dt1.getName() << "] hitPoints: " << dt1.getHitPoints() << " / energyPoints: " << dt1.getEnergyPoints() << std::endl;
	dt1.attack(target);
	std::cout << "[" << dt1.getName() << "] hitPoints: " << dt1.getHitPoints() << " / energyPoints: " << dt1.getEnergyPoints() << std::endl;
	dt1.attack(target);
	std::cout << "[" << dt1.getName() << "] hitPoints: " << dt1.getHitPoints() << " / energyPoints: " << dt1.getEnergyPoints() << std::endl;
	dt1.takeDamage(5);
	std::cout << "[" << dt1.getName() << "] hitPoints: " << dt1.getHitPoints() << " / energyPoints: " << dt1.getEnergyPoints() << std::endl;
	dt1.attack(target);
	std::cout << "[" << dt1.getName() << "] hitPoints: " << dt1.getHitPoints() << " / energyPoints: " << dt1.getEnergyPoints() << std::endl;

	return (0);
}