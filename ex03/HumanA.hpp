#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>

class HumanA
{
  private:
	std::string name;
	Weapon &weapon; // Referencia, debe estar siempre inicializada

  public:
	HumanA(const std::string &name, Weapon &weapon);
	void attack() const;
};

#endif
