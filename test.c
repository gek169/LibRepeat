#include <stdio.h>
int main(){
	#define REPEAT_FUNC(a) printf("\n%d",a);
	#define REPEAT_COUNT (1<<6)
	#include "lrepeat.h"
}
