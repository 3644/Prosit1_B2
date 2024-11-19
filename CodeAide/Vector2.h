#pragma once

#include <iostream>
#include <math.h>



class Vector2 {
private:
    float x, y;

public:

    Vector2() : x(0), y(0) {}


    Vector2(float x, float y) : x(x), y(y) {}


    float getX() const { return x; }
    float getY() const { return y; }

    // Mutator methods
    void setX(float x) { this->x = x; }
    void setY(float y) { this->y = y; }

    float norm() const {
        return sqrt(x * x + y * y);
    }


    float dot(const Vector2 &v) const {
        return x * v.x + y * v.y;
    }


    Vector2 dotScalar(float scalar) const {
        return Vector2(x * scalar, y * scalar);
    }


    float cross(const Vector2 &v) const {
        return x * v.y - y * v.x;
    }


    Vector2 negate() const {
        return Vector2(-x, -y);
    }
};