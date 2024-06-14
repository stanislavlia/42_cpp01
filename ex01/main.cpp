#include "Zombie.hpp"

int main()
{
    Zombie* zombie_horde;

    zombie_horde = zombieHorde(5, "David");

    std::cout << "=========Call announce() for each guy:========" << std::endl;
    for (int i = 0; i < 5; i++)
        zombie_horde[i].announce();


    //let's mannualy modify names of 1st and 5th zombies
    zombie_horde[0].setName("Jessica");
    zombie_horde[4].setName("Luce");


    std::cout << "=========Call announce() for each guy again after renaming:========" << std::endl;
    for (int i = 0; i < 5; i++)
        zombie_horde[i].announce();


    std::cout << "=========Deleting the horde:========" << std::endl;
    delete [] zombie_horde;
    return 0;
}