
#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__


class ClapTrap {
public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &obj);
	ClapTrap &operator = (const ClapTrap &obj);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	unsigned int getHitPoints(void) const;
	unsigned int getEnergyPoints(void) const;

private:
	ClapTrap(void);
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;
};

#endif //__CLAPTRAP_H__
