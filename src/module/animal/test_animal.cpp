#include "animal.h"
#include "cat.h"
#include "dog.h"

#include <iostream>

void test_animal()
{
    const Cat fred{ "Fred" };
    const Cat misty{ "Misty" };
    const Cat zeke{ "Zeke" };

    const Dog garbo{ "Garbo" };
    const Dog pooky{ "Pooky" };
    const Dog truffle{ "Truffle" };

    /*
        // Set up an array of pointers to animals, and set those pointers to our Cat and Dog objects
        //const auto animals{ std::to_array<const Animal*>({ &fred, &garbo, &misty, &pooky, &truffle, &zeke }) };

        // Before C++20, with the array size being explicitly specified
        // const std::array<const Animal*, 6> animals{ &fred, &garbo, &misty, &pooky, &truffle, &zeke };

        for (const auto animal : animals)
        {
            std::cout << animal->getName() << " says " << animal->speak() << '\n';
        }
    */
    // The above does not work in Mac, So I implemented using c-style arrays
    // TODO: Find the way to make it work.
    const Animal* animals[6] = {&fred, &garbo, &misty, &pooky, &truffle, &zeke};

    for (const auto animal : animals)
    {
        std::cout << animal->getName() << " says " << animal->speak() << '\n';
    }

}
