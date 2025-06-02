//
// Created by Diogo Alves on 02/06/2025.
//

#include "Airport.h"

Airport::Airport(const std::string& name, const std::string& city) : name_(name), city_(city) {}

std::string Airport::name() const {
    return name_;
}

std::string Airport::city() const {
    return city_;
}

void Airport::land(const airplane &ap) {
    airplanes_.push_back(ap);
}

void Airport::takeoff(const std::string &id) {
    for(size_t i = 0; i < airplanes_.size(); i++) {
        if(airplanes_[i].id == id) {
            airplanes_.erase(airplanes_.begin() + i);
            return;
        }
    }
}

int Airport::count_airplanes(const std::string &airline) const {
    int count = 0;
    for(size_t i = 0; i < airplanes_.size(); i++) {
        if(airplanes_[i].airline == airline) {
            count++;
        }
    }
    return count;
}

int main() {
    return 0;
}
