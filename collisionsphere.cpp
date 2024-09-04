#include "collisionsphere.h"
#include "vector3d.h"

collisionsphere::collisionsphere() { r = 0; }

collisionsphere::collisionsphere(const vector3d &vec, float rad) {
  center.change(vec.x, vec.y, vec.z);
  r = rad;
}
