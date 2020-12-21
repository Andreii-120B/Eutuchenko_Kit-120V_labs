#include <stdio.h>
#include <math.h>
int main()
{
	int a;
	printf("Введите число \n");
	scanf("%d", &a);
		
	if (a == 0 || a == 1){
		printf("Числа 0 и 1 не являються простыми\n");
		
	}else if( a < 0 ){
		printf("Числа, меньше 0 не являються простыми\n");	
	} else {
		for (int i = 2; i < a; i++ ){
			if (a % i == 0){
					printf ("Число не простое \n");
					a = 1;
					break;
				}
	
			}
		if (a != 1){
			printf("Число простое\n");
		}
	}



	return 0;
}
