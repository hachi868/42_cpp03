#include <iostream>
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap st1("name_st1");
	std::string target = "target";

	std::cout << "[" << st1.getName() << "] hitPoints: " << st1.getHitPoints() << " / energyPoints: " << st1.getEnergyPoints() << " / mode GuardGate: " << st1.getModeGuardGate() << std::endl;
	st1.attack(target);
	std::cout << "[" << st1.getName() << "] hitPoints: " << st1.getHitPoints() << " / energyPoints: " << st1.getEnergyPoints() << " / mode GuardGate: " << st1.getModeGuardGate() << std::endl;
	st1.attack(target);
	std::cout << "[" << st1.getName() << "] hitPoints: " << st1.getHitPoints() << " / energyPoints: " << st1.getEnergyPoints() << " / mode GuardGate: " << st1.getModeGuardGate() << std::endl;
	st1.takeDamage(5);
	std::cout << "[" << st1.getName() << "] hitPoints: " << st1.getHitPoints() << " / energyPoints: " << st1.getEnergyPoints() << " / mode GuardGate: " << st1.getModeGuardGate() << std::endl;
	st1.takeDamage(5);
	std::cout << "[" << st1.getName() << "] hitPoints: " << st1.getHitPoints() << " / energyPoints: " << st1.getEnergyPoints() << " / mode GuardGate: " << st1.getModeGuardGate() << std::endl;
	st1.beRepaired(5);
	std::cout << "[" << st1.getName() << "] hitPoints: " << st1.getHitPoints() << " / energyPoints: " << st1.getEnergyPoints() << " / mode GuardGate: " << st1.getModeGuardGate() << std::endl;
	st1.attack(target);
	std::cout << "[" << st1.getName() << "] hitPoints: " << st1.getHitPoints() << " / energyPoints: " << st1.getEnergyPoints() << " / mode GuardGate: " << st1.getModeGuardGate() << std::endl;
	st1.takeDamage(5);
	std::cout << "[" << st1.getName() << "] hitPoints: " << st1.getHitPoints() << " / energyPoints: " << st1.getEnergyPoints() << " / mode GuardGate: " << st1.getModeGuardGate() << std::endl;
	st1.takeDamage(5);
	std::cout << "[" << st1.getName() << "] hitPoints: " << st1.getHitPoints() << " / energyPoints: " << st1.getEnergyPoints() << " / mode GuardGate: " << st1.getModeGuardGate() << std::endl;
	st1.guardGate();
	std::cout << "[" << st1.getName() << "] hitPoints: " << st1.getHitPoints() << " / energyPoints: " << st1.getEnergyPoints() << " / mode GuardGate: " << st1.getModeGuardGate() << std::endl;
	st1.takeDamage(5);
	std::cout << "[" << st1.getName() << "] hitPoints: " << st1.getHitPoints() << " / energyPoints: " << st1.getEnergyPoints() << " / mode GuardGate: " << st1.getModeGuardGate() << std::endl;
	st1.attack(target);
	std::cout << "[" << st1.getName() << "] hitPoints: " << st1.getHitPoints() << " / energyPoints: " << st1.getEnergyPoints() << " / mode GuardGate: " << st1.getModeGuardGate() << std::endl;
	st1.attack(target);
	std::cout << "[" << st1.getName() << "] hitPoints: " << st1.getHitPoints() << " / energyPoints: " << st1.getEnergyPoints() << " / mode GuardGate: " << st1.getModeGuardGate() << std::endl;
	st1.takeDamage(5);
	std::cout << "[" << st1.getName() << "] hitPoints: " << st1.getHitPoints() << " / energyPoints: " << st1.getEnergyPoints() << " / mode GuardGate: " << st1.getModeGuardGate() << std::endl;
	st1.attack(target);
	std::cout << "[" << st1.getName() << "] hitPoints: " << st1.getHitPoints() << " / energyPoints: " << st1.getEnergyPoints() << " / mode GuardGate: " << st1.getModeGuardGate() << std::endl;
	return (0);
}