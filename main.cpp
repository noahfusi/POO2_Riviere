#include <iostream>
#include "riviere/person.hpp"
#include "riviere/boat.hpp"
#include <gtest

int main() {
    Boat boat("test1");
    Person person1("papa", true);
    Person person2("maman", false);
    Person person3("fils", false);
    cout << boat.add(&person1) << endl;
    cout << boat.add(&person2) << endl;
    cout << boat.add(&person1) << endl;
    cout << boat.add(&person3) << endl;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
