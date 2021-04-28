//
// Created by noahf on 28.04.2021.
//

#include "bank.hpp"

bool Bank::add(Person *p) {
    persons.push_back(p);
    return true;
}
