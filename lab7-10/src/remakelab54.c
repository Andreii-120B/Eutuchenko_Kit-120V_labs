#include <stdio.h>
#include <time.h>

/**
 * @file remakelab54.c
 * @brief Файл з четвертим завданням 5 лаборатороної роботи
 * "Визначити, чи є дане число досконалим"
 * @author Eutuchenko Andreii.
 * @date 23-nov-2020
 * @version 0.1
 */
 
 /**
 * @brief Функція, що визначає чи є число ідеальним
 * @param ціле число
 * @return Логічну відповідь у консоль
 */
 
void isperfect(int a){
  int i = 1;
  int b = 0;
  for (i = 1; i < a; i++) {
    if (a % i == 0 ) 
    {
      b = b + i;
    }
  }
  if (a == b) {
    printf( "Число идеальное\n");
  }
  else {
    printf( "Число не идеальное");
  }
  
  
  
	i = 0;
	b = 0;  
 }

/**
* main функція, викликає функцію {@link isperfect} декілька раз
* 
*/
int main(){
	isperfect(6);
	time_t seconds;
	seconds = time(NULL);
	isperfect (seconds % 10);
	return 0;
}
