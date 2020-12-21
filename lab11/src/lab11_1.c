#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#define LEN 10
/**
 * @mainpage
 * # Загальне завдання
 * **TASK** 
 *  make task from the laboratory practice
 *
 *
 * @author Eutuchenko Andreii.
 * @date 23-nov-2020
 * @version 0.1
 */

/**
 * @file lab11_1.c
 * @brief task number 1 from the laporatory practice
 * @author Eutuchenko Andreii.
 * @date 23-nov-2020
 * @version 0.1
 */
 
 /**
 * @brief Bubble sort 
 * @param mass 
 * @return sort mass 
 */
void bubbleSort(int *num, int size) // Пузырьковая сортировка 
{
  // Для всех элементов
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = (size - 1); j > i; j--) // для всех элементов после i-ого
    {
      if (num[j - 1] > num[j]) // если текущий элемент меньше предыдущего
      {
        int temp = num[j - 1]; // меняем их местами
        num[j - 1] = num[j];
        num[j] = temp;
      }
    }
  }
}
/**
* main func, task number 1 from the laporatory practice
* 
*/
int main(void)
{
	//Дано масив з N цілих чисел
	int mass[LEN];
	for (int i = 0; i < LEN; i++)
	{
		mass[i] = rand() % 10;
		printf("%d ", mass[i]);
	}
	printf("\n");
	bubbleSort(mass, LEN);

	//Вывод отсортированного массива
	for (int i = 0; i < LEN; i++)
	{
		printf("%d ", mass[i]);
	}



	
	
	//Считаем сколько памяти надо новому массиву 
	int chetmas = 0;
	for (int i = 0; i < LEN; i++)
	{
		if (mass[i] != mass[i + 1])
		{
			chetmas++;
		}
	}
	
	// Выделение памяти для результирующего массива 
	int * block = calloc(chetmas * 2, sizeof(int));
	
	
	//Основной цикл программы 
	for (int i = 0, j, q = 0, chet; i < LEN * 2; q+=2)
	{
		chet = 1;
		for (j = i + 1; j < LEN * 2; j++)
		{
			if (mass[j] == mass[i])
			{
				chet++;
			}
			else 
			{
				break;
			}
		}
		block[q] = mass[i];
		block[q + 1] = chet;
		i = j;
	}
	
	printf("\n");
	
	//Вывод результата 
	for (int i = 0; i < chetmas * 2; i+= 2)
	{
		printf ("%d - ", block[i]);
		printf ("%d ", block[i + 1]);
		printf ("\n");
	}
	
//	printf("       %d      \n", chetmas);
	
	free(block);
}
















