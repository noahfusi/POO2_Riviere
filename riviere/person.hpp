//
// Created by noahf on 28.04.2021.
//

#ifndef POO2_RIVIERE_PERSON_HPP
#define POO2_RIVIERE_PERSON_HPP

#include <string>
using namespace std;

class Person {
private:
    string name;
    bool driving;
public:
    bool canDrive();
    Person(string name, bool driving);

private:

};


#endif //POO2_RIVIERE_PERSON_HPP
