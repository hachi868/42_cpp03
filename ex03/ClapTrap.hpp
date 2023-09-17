#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__

#include <iostream>

class ClapTrap {
public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &obj);
	ClapTrap &operator = (const ClapTrap &obj);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string getName(void) const;
	unsigned int getHitPoints(void) const;
	unsigned int getEnergyPoints(void) const;
	unsigned int getAttackDamage(void) const;
	void setName(std::string name);
	void setHitPoints(unsigned int amount);
	void setEnergyPoints(unsigned int amount);
	void setAttackDamage(unsigned int amount);

protected:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;
};

#endif //__CLAPTRAP_H__
