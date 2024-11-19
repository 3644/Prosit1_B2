#pragma once

#include "Vector2.h"
#include <iostream>


class Point2 {
private:
    float x, y;

public:

    Point2() : x(0), y(0) {}

    Point2(float x, float y) : x(x), y(y) {}


    float getX() const { return x; }
    float getY() const { return y; }
    Vector2 sub(const Point2 &p) const;

    void setX(float x) { this->x = x; }
    void setY(float y) { this->y = y; }

    void print() const {
        std::cout << "{" << x << ", " << y << "}" << std::endl;
    }


    Vector2 subtract(const Point2 &p) const {
        return Vector2(x - p.x, y - p.y);
    }

    Point2 add(const Vector2 &v) const {
        return Point2(x + v.getX(), y + v.getY());
    }
};