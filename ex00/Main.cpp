#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie = newZombie("Zombie1");
    randomChump("Zombie2");
    zombie->announce();
    std::cout << "Zombie address: " << zombie << std::endl;
    delete zombie;
    return 0;
}
