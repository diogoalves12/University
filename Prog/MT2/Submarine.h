//
// Created by Diogo Alves on 02/06/2025.
//

#ifndef EXERCISES_SUBMARINE_H
#define EXERCISES_SUBMARINE_H

#include <iostream>
#include "Floatable.h"

class Submarine : public Floatable {
public:
    Submarine(int id, double mass, std::string captain) : Floatable(id, mass), captain_(captain) {}

    ~Submarine() = default;

    std::string captain() const {
        return captain_;
    }

    double buoyancy() const override {
        return mass() * 9.81 * 1025;
    }
private:
    std::string captain_;
};

#endif //EXERCISES_SUBMARINE_H

