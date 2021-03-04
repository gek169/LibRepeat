#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>

#define NSINVALUES 0x100
#define REPEAT_COUNT (NSINVALUES)

int8_t mydata1[NSINVALUES] = {
#define REPEAT_FUNC(a) ((int8_t)(127 * sinf( ((float)(a) / (float)NSINVALUES) * 2.0 * M_PI) )), 
#include "lrepeat.h"
};

const int cospiover2 = 127 * sinf(M_PI/2.0);

int main(){
	for(int i = 0; i < NSINVALUES; i++)
	{
		printf("127 * sin(sin of %f), = %d\n",  ((float)(i) / (float)NSINVALUES) * 2.0 * M_PI, (int)mydata1[i]);
	}
	printf("sizeof is %zu", sizeof(mydata1));
}
