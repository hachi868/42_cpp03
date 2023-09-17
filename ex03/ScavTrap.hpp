
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
	void attack(const std::string& target);
	void guardGate();
	bool getModeGuardGate();

private:
	std::string _name;
	bool _modeGuardGate;
};

#endif //__SCAVTRAP_H__
