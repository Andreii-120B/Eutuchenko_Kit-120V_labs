#include <stdio.h>
int main()
{
	int a,b;
	printf ("Введите 2 числа, чтобы найти их НОД\n");
	scanf("%d", &a);
	scanf("%d", &b);
	
	if ( a < 0 || b < 0 ){
		a = -1 * a;
		b = -1 * b;
	}
	if (( a > 0 && b < 0) || (a < 0 && b > 0)){
		printf ("Невозможно найти НОД для отрицательного и положительного числа\n");
	} else if (a == 0 || b == 0){
		printf ("Нельзя вводить 0, введите натуральое число\n");
	} else {
	
		while (a !=0 && b != 0){
			if (a > b){
			
				a = a % b;
			
			} else {
			
				b = b % a;
			}
		
		}
		a = a + b;
		printf ("%d\n", a);
	}
	return 0;
}
