#include <stdio.h>
#include <time.h>
/**
 * @file remakelab55.c
 * @brief Файл з п'ятим завданням 5 лаборатороної роботи
 * "Визначити корінь числа без допомоги зовнішніх бібліотек"
 * @author Eutuchenko Andreii.
 * @date 23-nov-2020
 * @version 0.1
 */
 
 /**
 * @brief Функція, що шукає найбільший спільний дільник
 * @param число  
 * @return корінь числа	
 */
float sqrt(float digit)
{
	 float sqrt = digit / 2.f;
    float x;


      do
      {
        x = sqrt;
        sqrt = (x + (digit / x)) / 2.f;
      } while ((x - sqrt != 0.f));
     

	return sqrt; 

}

/**
* main функція, викликає функцію {@link sqrt} декілька раз
* 
*/
int main(){

	printf("%f\n", sqrt(16));
	time_t seconds;
	seconds = time(NULL);
	
	printf("%f\n", sqrt(seconds));	
	return 0;
}
