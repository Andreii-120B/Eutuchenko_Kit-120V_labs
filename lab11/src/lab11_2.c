#include <stdio.h>
#include <stdlib.h>
/**
 * @file lab11_2.c
 * @brief task number 2 from the laporatory practice"
 * @author Eutuchenko Andreii.
 * @date 23-nov-2020
 * @version 0.1
 */
/**
* main func, task number 2 from the laporatory practice
* 
*/
int main(void)
{
	// Входной массив 
	int mass[] = {1, 2, -4, 2, 4, -2, -4, 2, 4, 6, -6, 7, 8, 23, -56, 54, 23, -11, -45, 45};


	// size of mass
	
	int size = sizeof(mass) / sizeof(mass[0]);

	//Цикл, который находит количество непрерывных последовательностей 
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (mass[i] < 0)
		{
			count++;
			while (mass[i] < 0)
			{
				i++;
			}
		
		}
	}
	if (mass[0] > 0)
	{
	count++;
	}
	if (mass[size - 1] > 0)
	{
	count++;
	}
	// Создание двухмерного массива 
	const int ccount = count - 1;
	const int csize = size + 1;
		
		
	int resmas[ccount][csize];
	
	// Заполнение двухмерного масиива нулями 
	
	for (int i = 0; i < ccount; i++ )
	{
		for (int j = 0; j < csize; j++)
		{
			resmas[i][j] = 0;
		}
	
	}
	
	//Заполнение двухмерного массива нужными значениями
	int j = 0;
	for (int i = 0; i < ccount; i++)
	{
		for (int q = 0;j < csize - 1 ;j++, q++)
		{
			if (mass[j] > 0)
			{
				resmas[i][q] = mass[j];
			}
			else
			{
				while (mass[j] < 0)
				{
					j++;
				}
				break;
			}
		
		}
	
	
	}

// Вычисление суммы 
	int sum = 0;
	for (int i = 0; i < ccount; i++ )
	{
		for (int j = 0; j < csize - 1; j ++)
		{
			sum = sum + resmas[i][j];
		}
		resmas[i][csize - 1] = sum;
		sum = 0;
	}
// Определение большей части 
	int ch = 0;
	for (int i = 0; i < ccount; i++)
	{
		if (resmas[ch][csize - 1] < resmas[i][csize - 1])
		{
			ch = i;
		}
	
	}

// Создание результирующего масиива
	int chet = 0;
	for (int i = 0; i < csize - 1; i ++)
	{
		if (resmas[ch][i] != 0)
		{
			chet += 1;
		}
	}

	
	int * block = calloc(chet , sizeof(int)); 
	
	for (int i = 0; i < chet; i++)
	{
		block[i] = resmas[ch][i];
		printf("%d ", block[i]);
	}
	printf("\n");
// Вывод многомерного массива

	for (int i = 0; i < ccount; i++)
	{
		for (int j = 0; j < csize; j++)
		{
			printf("%d ", resmas[i][j]);
		}
	printf("\n");
	}





	free(block);
return 0;
}
