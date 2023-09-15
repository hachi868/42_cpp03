

#ifndef __DIAMONDTRAP_H__
#define __DIAMONDTRAP_H__

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
	DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &obj);
	DiamondTrap &operator=(const DiamondTrap &obj);
	~DiamondTrap();
	std::string getName(void) const;
	unsigned int getHitPoints(void) const;
	unsigned int getEnergyPoints(void) const;
	unsigned int getAttackDamage(void) const;
	void setName(std::string name);
	void setHitPoints(unsigned int amount);
	void setEnergyPoints(unsigned int amount);
	void setAttackDamage(unsigned int amount);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void attack(const std::string &target);
	void whoAmI();

private:
	std::string _name;
};

#endif //__DIAMONDTRAP_H__
