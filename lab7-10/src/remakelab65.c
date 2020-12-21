#include <stdio.h>
/**
 * @file remakelab65.c
 * @brief Файл з п'ятим завданням 6 лаборатороної роботи
 * "Виконати циклічне зрушення массиву Н * Н вліво"
 * @author Eutuchenko Andreii.
 * @date 23-nov-2020
 * @version 0.1
 */
 
 /**
 * @brief Функція, що зрушає массиву Н * Н вліво"
 * @param масив Н * Н
 * @return масив Н * Н
 */
void shift(int mas[3][3], const int N)
{
	//сохранение в резерв
    int resmas[N][1];
    for (int i = 0; i < N; i++) {
        resmas[i][0] = mas[i][0];
    }


    // сдвиг 
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            mas[j][i] = mas[j][i + 1];
        }

    }
    
    //заносим резерв обратно 
    for (int i = 0; i < N; i++) {
        mas[i][N - 1] = resmas[i][0];
    }

    //Вывод
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", mas[i][j]);
                   
        }printf("\n");
        
        
    }





}
/**
* main функція, викликає функцію {@link shift} декілька раз
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
            printf("%d ", mas[i][j]);
        }printf("\n");
        
        
    }
    printf("\n");
    printf("\n");
    printf("\n");
    shift(mas, N);
    
}
