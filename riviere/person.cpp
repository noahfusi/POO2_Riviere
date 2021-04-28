//
// Created by noahf on 28.04.2021.
//

#include "person.hpp"

#include <utility>

bool Person::canDrive() {
    return this->driving;
}

Person::Person(string name, bool driving) {
    this->name = std::move(name);
    this->driving = driving;
}
