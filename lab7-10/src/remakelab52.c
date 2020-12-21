#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/**
 * @file remakelab52.c
 * @brief Файл з другим завданням 5 лаборатороної роботи
 * "Визначити чи є задане число простим"
 * @author Eutuchenko Andreii.
 * @date 23-nov-2020
 * @version 0.1
 */
 
 
 /**
 * @brief Функція, що визначае чи є задане число простим
 * @param ціле число 
 * @return Логічну відповідь у консоль 	
 */
 
void issimple(int a){
		
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
}




/**
* main функція, викликає функцію {@link issimple} декілька раз
* 
*/

int main(){
	issimple(11);

	time_t seconds;
	seconds = time(NULL);

	issimple(seconds % 100);
	return 0;
}



