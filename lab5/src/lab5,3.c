#include <stdio.h>
int main() {
	int a;
	printf ("Введите номер билета\n");
	scanf ("%d", &a);
  int b;
  int a1, a2, a3, a4 ,a5, a6;
  
  a1 = a / 100000;
  a2 = a / 10000 % 10;
  a3 = a / 1000 % 10;
  a4 = a / 100 % 10;
  a5 = a / 10 % 10;
  a6 = a % 10;
  a = a1 + a2 + a3;
  b = a4 + a5 + a6;
	
	if (a == b){
		printf("Билет счастлиый, УРА!\n");
	}else {
		printf ("Увы, билет не счастливый\n");
	}
	




	return 0;
}
