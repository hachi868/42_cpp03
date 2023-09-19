
#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap &obj);
	FragTrap &operator = (const FragTrap &obj);
	~FragTrap();
	void highFivesGuys(void);

private:
	static const unsigned int _hitPointsDefault;
	static const unsigned int _energyPointsDefault;
	static const unsigned int _attackDamageDefault;
};

#endif //__FRAGTRAP_H__
