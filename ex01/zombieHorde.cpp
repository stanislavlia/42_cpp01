#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie*  zombies_horde = new Zombie[N];

    for (int i = 0; i < N; i++)
        zombies_horde[i].setName(name);

    return zombies_horde;
}