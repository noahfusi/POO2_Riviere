//
// Created by noahf on 28.04.2021.
//

#include "boat.hpp"

#include <utility>

bool Boat::add(Person* p) {
    if(persons.size() == MAX_CAPACITY) return false;
    return Container::add(p);
}

Boat::Boat(string name) : Container(std::move(name)){

}
