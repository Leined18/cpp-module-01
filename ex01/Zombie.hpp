#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <cstdlib>
# include <iostream>
# include <string>

class Zombie
{
  public:
	Zombie();
	~Zombie();
	void announce(void);
	/// Setters and Getters
	void setName(std::string name);
	std::string getName(void);

  private:
	std::string name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif