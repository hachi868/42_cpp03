
#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(bool isHp, bool isMp, bool isAd);
	FragTrap(const FragTrap &obj);
	FragTrap &operator = (const FragTrap &obj);
	~FragTrap();
	void highFivesGuys(void);
};

#endif //__FRAGTRAP_H__
