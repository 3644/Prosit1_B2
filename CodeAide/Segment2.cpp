#include "Segment2.h"

#include "Segment2.h"

IntersectionStatus Segment2::intersect(const Segment2 &r, Point2 &p) {
    Point2 oa = this->getOrigin(), ob = r.getOrigin();
    Vector2 da = this->getDirection(), db = r.getDirection();
    Vector2 dc = ob.sub(oa);  

    IntersectionStatus status;
    float det = da.cross(db); 
    if (det != 0.0) {

        float u = dc.cross(db) / det;


        p = oa.add(da.dotScalar(u));
        status = POINT;
    } else {

        status = NON_INTERSECTING;
    }

    return status;
}
