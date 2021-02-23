#include <stdio.h>
#include <stdlib.h>

#define DISTANCE 500
#define possibleHeights 256
#define GETHEIGHT(cameraHeight, cameraHorizon, scaleHeight, dist, h)\
 ((cameraHeight - h) / (dist+1) * scaleHeight + cameraHorizon)
 

int mydata1[DISTANCE * possibleHeights] = {
#define REPEAT_COUNT (WIDTH * HEIGHT)
//NOTE: (a)/WIDTH is the h value
#define REPEAT_FUNC(a) GETHEIGHT(20, 43, 50, ((a)%DISTANCE), ((a)/DISTANCE)),
#include "lrepeat.h"
};

int main(){
	for(int j = 0; j < possibleHeights; j++)
	for(int i = 0; i < DISTANCE; i++)
	{
		printf("\n %d, %d = %f", i, j, mydata1[i + j * DISTANCE]);
	}
}
