//
// Created by noahf on 28.04.2021.
//

#include "container.hpp"

#include <utility>

Container::Container(string name) {
    this->name = std::move(name);
}

bool Container::add(Person *p) {
    if(find(persons.begin(), persons.end(), p) != persons.end() && !persons.empty()) return false;
    persons.push_back(p);
    return true;
}
