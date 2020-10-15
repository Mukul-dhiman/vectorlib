#include "veclib.h"

float dotprod(vector vectorA, vector vectorB) {

	float total=0;

	for(int i=0;i<4;i++) {
		total+=vectorA[i]*vectorB[i];
	}

	return total;
}
