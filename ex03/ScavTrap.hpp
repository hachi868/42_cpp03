
#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &obj);
	ScavTrap &operator = (const ScavTrap &obj);
	~ScavTrap();
	void guardGate();
	bool getModeGuardGate();

private:
	bool _modeGuardGate;
};

#endif //__SCAVTRAP_H__
