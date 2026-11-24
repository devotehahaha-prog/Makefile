#include <stdio.h>
#include "vec/vec.h"
#include "rng/rng.h"

int main(void){
	float dot = vec_dot((vec){1.5,2.1},(vec){0.5,0.2});
	printf("dot: %f\n",dot);	

	printf("you won $%.2f !\n",rng_f());

	return 0;
}
