#include <stdio.h>
#include <math.h>
void main()
{
	double a, fraction, integer;
	a = 234.243;
	int b = a;
	fraction = (modf(a, &integer))*1000;
	if (fraction == 0)
	{
	
		printf("Деление на 0 невозможно");
	
	}else {
		a = fraction / integer;
		a = (a*100)/100.0;
		printf("%f" ,a);
	}
	return 0;
}
