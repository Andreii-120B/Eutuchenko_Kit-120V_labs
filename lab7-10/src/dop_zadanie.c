#include <stdio.h>
#include <stdarg.h>
 /**
 * @file dop_zadanie.c
 * @brief Файл з першим завданням 5 лаборатороної роботи
 * "Реалізувати функцію з варіативною кількістю аргументів"
 * @author Eutuchenko Andreii.
 * @date 23-nov-2020
 * @version 0.1
 */
 
 /**
 * @brief Функція, що шукає кількіть пар, де перше число більше другого
 * @param числа,  у фарматі (кількість_чисел, число а, число б, ... )
 * @return Логічну відповідь у консоль якщо при введенні чисел виявлено помилку, або НОД, якщо все введено правильно	
 */
int couples(int var, ...)
{
	int count = 0;
	int value = 0;
	va_list vl;
	va_start(vl, var);
	int mass[var];

	for (int i = 0; i < var; i++)
	{
		mass[i] = va_arg(vl, int);
		printf("%d\n", mass[i]);
	}
	
	
	for (int i = 0; i < var - 1; i++)
	  {
    	if (mass[i] < mass [i+1])
          {
      		count++;
	      }
	  }
	

	va_end(vl);
	return count;
}
 
/**
* main функція, викликає варіативну функцію {@link couples} 
* 
*/

int main(void)
{
	printf("%d\n",  couples(3,1,2,3));

}
