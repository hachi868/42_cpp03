

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
	void attack(const std::string &target);
	void whoAmI();

private:
	std::string _name;
};

#endif //__DIAMONDTRAP_H__
