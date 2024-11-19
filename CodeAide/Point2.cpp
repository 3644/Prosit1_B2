#include "Point2.h"
Vector2 Point2::sub(const Point2 &p) const {
    return Vector2(this->getX() - p.getX(), this->getY() - p.getY());
}