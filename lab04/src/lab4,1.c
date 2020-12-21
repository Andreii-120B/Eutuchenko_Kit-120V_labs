#include <stdio.h>
void main()
{
	float r,res;
	char var;
	const float p = 3.1415926535;
	r = 4;
	var = 'l';
	switch(var)
	{
	case 'l':
		res = p*r*2;
		break;
	case 's':
		res = p*r*r;
		break;
	case 'v':
		res = (p*r*r*r)/4*3;
		break;
	default:
		break;
	}
	return 0;
}
