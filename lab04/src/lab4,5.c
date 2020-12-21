#include <stdio.h>
int main()
{
	double x,y;
	x = -2;
	if (x <= -1){
		y = -1 * x -1;
	} else if (x == 0){
	y = 1;
	} else if(-1 < x && x < 0) {
		y = x + 1;
	} else if(0 < x && x < 1) {
		y = -1 * x + 1;
	} else{
		y = x-1;
	}
	printf ("%f", y);
return 0;
}
