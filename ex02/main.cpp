#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap ft1("name_ft1");
	std::string target = "target";

	std::cout << "[" << ft1.getName() << "] hitPoints: " << ft1.getHitPoints() << " / energyPoints: " << ft1.getEnergyPoints() << std::endl;
	ft1.attack(target);
	std::cout << "[" << ft1.getName() << "] hitPoints: " << ft1.getHitPoints() << " / energyPoints: " << ft1.getEnergyPoints() << std::endl;
	ft1.attack(target);
	std::cout << "[" << ft1.getName() << "] hitPoints: " << ft1.getHitPoints() << " / energyPoints: " << ft1.getEnergyPoints() << std::endl;
	ft1.takeDamage(5);
	std::cout << "[" << ft1.getName() << "] hitPoints: " << ft1.getHitPoints() << " / energyPoints: " << ft1.getEnergyPoints() << std::endl;
	ft1.takeDamage(5);
	std::cout << "[" << ft1.getName() << "] hitPoints: " << ft1.getHitPoints() << " / energyPoints: " << ft1.getEnergyPoints() << std::endl;
	ft1.beRepaired(5);
	std::cout << "[" << ft1.getName() << "] hitPoints: " << ft1.getHitPoints() << " / energyPoints: " << ft1.getEnergyPoints() << std::endl;
	ft1.attack(target);
	std::cout << "[" << ft1.getName() << "] hitPoints: " << ft1.getHitPoints() << " / energyPoints: " << ft1.getEnergyPoints() << std::endl;
	ft1.takeDamage(5);
	std::cout << "[" << ft1.getName() << "] hitPoints: " << ft1.getHitPoints() << " / energyPoints: " << ft1.getEnergyPoints() << std::endl;
	ft1.takeDamage(5);
	std::cout << "[" << ft1.getName() << "] hitPoints: " << ft1.getHitPoints() << " / energyPoints: " << ft1.getEnergyPoints() << std::endl;
	ft1.highFivesGuys();
	std::cout << "[" << ft1.getName() << "] hitPoints: " << ft1.getHitPoints() << " / energyPoints: " << ft1.getEnergyPoints() << std::endl;
	ft1.takeDamage(5);
	std::cout << "[" << ft1.getName() << "] hitPoints: " << ft1.getHitPoints() << " / energyPoints: " << ft1.getEnergyPoints() << std::endl;
	ft1.attack(target);
	std::cout << "[" << ft1.getName() << "] hitPoints: " << ft1.getHitPoints() << " / energyPoints: " << ft1.getEnergyPoints() << std::endl;
	ft1.attack(target);
	std::cout << "[" << ft1.getName() << "] hitPoints: " << ft1.getHitPoints() << " / energyPoints: " << ft1.getEnergyPoints() << std::endl;
	ft1.takeDamage(5);
	std::cout << "[" << ft1.getName() << "] hitPoints: " << ft1.getHitPoints() << " / energyPoints: " << ft1.getEnergyPoints() << std::endl;
	ft1.attack(target);
	std::cout << "[" << ft1.getName() << "] hitPoints: " << ft1.getHitPoints() << " / energyPoints: " << ft1.getEnergyPoints() << std::endl;

	ScavTrap st1("name_st1");

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