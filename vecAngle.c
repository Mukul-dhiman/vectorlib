#include "veclib.h"
#include <math.h>
#include <stdio.h>
float squareDistance(vector vec_a) {
    float dist = 0.0;
    for (int i=0;i<DIM;i++) {
        dist += (vec_a[i])*(vec_a[i]);
    }
    return dist;
}
float angle(vector vec_a, vector vec_b) {
   float dista, distb;
   dista =  squareDistance(vec_a);
   distb = squareDistance(vec_b);
   float dotproduct = dotprod(vec_a, vec_b);
   float ans = acos(dotproduct/sqrt(dista*distb));
   return ans*180/3.14159;
}