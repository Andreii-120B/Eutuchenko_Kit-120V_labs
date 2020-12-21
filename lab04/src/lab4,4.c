#include <stdio.h>
int main()
{
 	double x,y;
 	x = -1;
 	if (x < -1){
 		y = -1 / x;
 	} else if (-1 < x && x < 1){
 	y = x*x;
 	} else {
 	y = 1;
 	}
	printf("%f", y);


return 0;
}
