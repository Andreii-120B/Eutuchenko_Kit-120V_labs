#include <stdio.h>

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
    //сохранение в резерв
    int resmas[N][1];
    for (int i = 0; i < N; i++) {
        resmas[i][0] = mas[i][0];
    }


    // Попытка сдвига 
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
