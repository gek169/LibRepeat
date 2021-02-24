#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define NSINVALUES 0x100000
#define REPEAT_COUNT (NSINVALUES)
int mydata1[NSINVALUES] = {
#define REPEAT_FUNC(a) ((int)(65280 * sinf( ((float)(a) / (float)NSINVALUES) * 2.0 * M_PI) )), 
#include "lrepeat.h"
};
const int cospiover2 = 65280 * sinf(M_PI/2.0);

int main(){
	for(int i = 0; i < NSINVALUES; i++)
	{
		printf("sin(fixed point, %d), = %d\n", i , mydata1[i]);
	}
}
