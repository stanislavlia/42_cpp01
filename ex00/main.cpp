
#include "Zombie.hpp"

//testing 2 functions
int main()
{
    Zombie* zombie1 = newZombie("Victoria");
    Zombie* zombie2 = newZombie("James");
    Zombie* zombie3 = newZombie("Dave");

    randomChump("Sergey");
    randomChump("Peter");
    randomChump("Alex");

    //need to free heap-alloc memory

    zombie1->announce();
    zombie2->announce();
    zombie3->announce();
    zombie3->announce();
    zombie3->announce();

    delete zombie1;
    delete zombie2;
    delete zombie3;

    return (0);
}