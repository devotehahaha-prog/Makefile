#include "rng.h"
#include <stdlib.h>

float rng_f(void){
	return (float) rand() / RAND_MAX + 0.5;
}
