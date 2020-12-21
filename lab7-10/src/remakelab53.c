#include <stdio.h>
#include <time.h>

/**
 * @file remakelab53.c
 * @brief Файл з третім завданням 5 лаборатороної роботи
 * "Визначити чи є квиток щасливим"
 * @author Eutuchenko Andreii.
 * @date 23-nov-2020
 * @version 0.1
 */
 
 
 /**
 * @brief Функція, що визначає чи є квиток щасливим
 * @param 2 цілих числа 
 * @return Логічну відповідь у консоль 	
 */
 
void islucky(int a){

	int b,c;
    int i;
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


/**
* main функція, викликає функцію {@link islucky} декілька раз
* 
*/

int main(){
	islucky(123006);
	
	time_t seconds;
	seconds = time(NULL)  % 10000000 / 10;
	
	islucky (seconds);

	return 0;
}
