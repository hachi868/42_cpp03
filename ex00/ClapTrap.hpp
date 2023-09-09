
#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__


class ClapTrap {
public:
	ClapTrap(std::string name);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

private:
	std::string	name;
	unsigned int	hit_points;
	unsigned int	energy_points;
	unsigned int	attack_damage;
};


#endif //__CLAPTRAP_H__
