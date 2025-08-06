#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie = newZombie("Zombie1");
    randomChump("Zombie2");
    zombie->announce();
    delete zombie;
    return 0;
}
