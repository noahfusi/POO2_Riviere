//
// Created by noahf on 28.04.2021.
//

#ifndef POO2_RIVIERE_CONTAINER_HPP
#define POO2_RIVIERE_CONTAINER_HPP
#include <string>
#include <list>
#include "person.hpp"

using namespace std;

class Container {
protected:
    Container(string name);
    list<Person*> persons;

public:
    virtual bool add(Person* p);

private:
    string name;
};


#endif //POO2_RIVIERE_CONTAINER_HPP
