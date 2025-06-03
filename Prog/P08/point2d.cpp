//
// Created by Diogo Alves on 03/06/2025.
//

#include "Point2d.h"
#include <cmath>

void Point2d::translate(const Point2d& p) {
    this->x = get_x() + p.x;
    this->y = get_y() + p.y;
}

double Point2d::distance_to(const Point2d& p) const {
    double res = sqrt(pow(x - p.x, 2) + pow(y -p.y ,2));
    return res;
}