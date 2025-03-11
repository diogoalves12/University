#include "vect3d.h"

vect3d cross(vect3d a, vect3d b){
  vect3d res;

  res.x = a.y * b.z - a.z * b.y;
  res.y = a.z * b.x - a.x * b.z;
  res.z = a.x * b.y - a.y * b.x;

  return res;
}
