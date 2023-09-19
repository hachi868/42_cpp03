

#ifndef __DIAMONDTRAP_H__
#define __DIAMONDTRAP_H__

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
	DiamondTrap(void);
	DiamondTrap(const std::string &name);
	DiamondTrap(const DiamondTrap &obj);
	DiamondTrap &operator=(const DiamondTrap &obj);
	~DiamondTrap();
	void whoAmI();

private:
	std::string _name;
};

#endif //__DIAMONDTRAP_H__
