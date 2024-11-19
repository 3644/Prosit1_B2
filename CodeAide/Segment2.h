#pragma once

#include "Point2.h"
#include "Vector2.h"
#include <iostream>

enum IntersectionStatus {
  POINT,
  COLINEAR_INTERSECTING,
  COLINEAR_NON_INTERSECTING,
  PARALLEL_NON_INTERSECTING,
  NON_INTERSECTING
};

class Segment2 {
private:
    Point2 origin;
    Vector2 direction;

public:

    Segment2() {}


    Segment2(const Point2 &origin, const Vector2 &direction) : origin(origin), direction(direction) {}


    Point2 getOrigin() const { return origin; }
    Vector2 getDirection() const { return direction; }


    float length() const {
        return direction.norm();
    }
  IntersectionStatus intersect(const Segment2 &s, Point2 &p);

};
