#include <stdio.h>
/**
 * @file remakelab66.c
 * @brief Файл з шостим завданням 6 лаборатороної роботи
 * "Звести до квадрату матрицю Н розміру"
 * @author Eutuchenko Andreii.
 * @date 23-nov-2020
 * @version 0.1
 */
 
 /**
 * @brief Функція, що зводить до квадрату матрицю Н розміру
 * @param матриця Н*Н
 * @return матриця (Н*Н)^2
 */
void multiply(int mas[3][3], const int N)
{
	int res[N][N];
	
	
	
	
	int sum = 0;
    for (int i = 0; i < N; i++)
    {
        for (int  j = 0; j < N; j++)
        {
            for (int q = 0; q < N; q++)
            {
                sum = sum + mas[q][i] * mas[j][q];



            }
            res[j][i] = sum;
            sum = 0;
        }
    }


    //ВЫВОД РЕЗУЛЬТАТА
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", res[i][j]) ;
        }printf("\n");
        printf("\n");
    }
}





/**
* main функція, викликає функцію {@link myltiply} декілька раз
* 
*/
int main()
{
   
    const int N = 3;
    int mas[N][N];
    
    //Заполнение массива
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            mas[i][j] = rand() % 10;
        }
    }
    //вывод массива 

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d", mas[i][j]);
            printf(" ");
        }printf("\n");
        printf("\n");
    }
    printf("\n");
    //УМНОЖЕНИЕ
	multiply(mas, N);
}
