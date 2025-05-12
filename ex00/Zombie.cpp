#include "Zombie.hpp"

Zombie::Zombie(void)
{
    std::cout << "Zombie created: " << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie destroyed: " << name << std::endl;
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

std::string Zombie::getName(void)
{
    return this->name;
}