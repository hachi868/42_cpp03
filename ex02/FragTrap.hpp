
#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap(std::string name);
	FragTrap(const FragTrap &obj);
	FragTrap &operator = (const FragTrap &obj);
	~FragTrap();
	void highFivesGuys(void);
};

#endif //__FRAGTRAP_H__
