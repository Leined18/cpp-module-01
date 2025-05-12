#ifndef ZOMBIE_HPP   
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Zombie {
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

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif