
#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(bool isHp, bool isMp, bool isAd);
	ScavTrap(const ScavTrap &obj);
	ScavTrap &operator = (const ScavTrap &obj);
	~ScavTrap();
	void attack(const std::string& target);
	void guardGate();
	bool getModeGuardGate();

private:
	bool _modeGuardGate;
};

#endif //__SCAVTRAP_H__
