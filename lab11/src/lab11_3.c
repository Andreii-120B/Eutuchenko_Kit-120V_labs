#include <stdio.h>
#include <stdlib.h>

/**
 * @file lab11_3.c
 * @brief task number 3 from the laporatory practice
 * @author Eutuchenko Andreii.
 * @date 23-nov-2020
 * @version 0.1
 */
/**
* main func, task number 3 from the laporatory practice
* 
*/
int main(void)
{
	//Входной массив
	double mass[] = {1.5, 2.5, 3.25, 4, 1, 2, 3, 4, 5, 6};

	// size of mass

	int size = sizeof(mass) / sizeof(double);

	// Цикл который находит количество непрерывающиеся последовательности чисел

	int count = 1;
	for (int i = 0; i < size - 1; i++)
	{
		if (mass[i + 1] < mass[i])
		{
			count++;
		}
	
	}

	
	
	//Создание 2х мерного массива 
	const int constcount = count;
	const int constsize = size + 1;
	
	double resmas[constcount][constsize];
	
	//Заполнение двухмерного массива нулями 
	
	for (int i = 0; i < constcount; i++ )
	{
		for (int j = 0; j < constsize; j++)
		{
			resmas[i][j] = 0;
		}
	
	}
	
	//Заполнение двухмерного массива нужными значениями
	int j = 0;
	for (int i = 0; i < constcount; i++)
	{
		for ( int q = 0 ; j < constsize - 1; j++)
		{
			if (mass[j + 1] < mass[j])
			{
				resmas[i][q] = mass[j];
				q++;
				j++;
				break;
			}
			else
			{
				resmas[i][q] = mass[j];
				q++;
			}
		}
	
	}
	// Подсчет количества символов 
	for (int j = 0; j < constcount; j++)
	{
		for (int i = size, chet = constsize; i < constsize; i--)
		{
			if(resmas[j][i] == 0)
			{
				chet--;
			}
			else
			{
				resmas[j][constsize - 1] = chet;
				break;
			}
		}
	}
	// Определение большей части
	int biggest = 0; 
	for (int i = 0; i < constcount; i++)
	{
		if (resmas[biggest][constsize - 1] < resmas[i + 1][constsize - 1])
		{
			biggest = i + 1;
		}
	}
	// Вывод многомерного массива

	/*for (int i = 0; i < constcount; i++)
	{
		for (int j = 0; j < constsize; j++)
		{
			printf("%f ", resmas[i][j]);
		}
	printf("\n");
	}*/
	// Создание результирующего массива 
	float * block = calloc( (int)resmas[biggest][constsize - 1] , sizeof(float)); 
	
	for (int i = 0; i < resmas[biggest][constsize - 1]; i++)
	{
		block[i] = resmas[biggest][i];
		printf("%f ", block[i]);
	}
	printf("\n");
	
	
	free(block);
return 0;
}
