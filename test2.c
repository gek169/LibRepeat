#include <stdio.h>
#include <stdlib.h>
#define WIDTH 256
#define HEIGHT 160
#define REPEAT_FUNC(a) ((a%WIDTH) + (a/WIDTH)<<10),
#define REPEAT_COUNT (WIDTH * HEIGHT)
int mydata[WIDTH * HEIGHT] = {
#include "lrepeat.h"
};

int main(){
	for(int i = 0; i < WIDTH; i++)
	for(int j = 0; j < HEIGHT; j++)
	{
		printf("\n %d, %d = %d", i, j, mydata[i + j * WIDTH]);
	}
}
