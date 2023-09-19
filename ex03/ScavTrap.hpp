
#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &obj);
	ScavTrap &operator = (const ScavTrap &obj);
	~ScavTrap();
	void attack(const std::string &target);
	void guardGate();

private:
	bool _modeGuardGate;

protected:
	static const unsigned int _hitPointsDefault;
	static const unsigned int _energyPointsDefault;
	static const unsigned int _attackDamageDefault;
};

#endif //__SCAVTRAP_H__
