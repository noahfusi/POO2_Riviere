//
// Created by noahf on 28.04.2021.
//

#ifndef POO2_RIVIERE_BOAT_HPP
#define POO2_RIVIERE_BOAT_HPP
#include "container.hpp"


class Boat : Container{
private:
    const static unsigned int MAX_CAPACITY = 2;

public:
    Boat(string name);

    bool add(Person* p) override;

private:

};


#endif //POO2_RIVIERE_BOAT_HPP
