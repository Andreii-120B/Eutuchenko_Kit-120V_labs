# Звіт до завдання 6.6

Звести матрицю до квадрату

###1. функція centring

	
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
### 2. main функція 

	int main()
	{
   
	    const int N = 3;
	    int mas[N][N];
    

	    for (int i = 0; i < N; i++)
	    {
	        for (int j = 0; j < N; j++)    <- заповненя масиву
	        {
	            mas[i][j] = rand() % 10;
	        }
	    }

	
	    for (int i = 0; i < N; i++)
	    {
	        for (int j = 0; j < N; j++)
	        {
	            printf("%d", mas[i][j]);   <- вивід заповненого масиву
	            printf(" ");
	        }printf("\n");
	        printf("\n");
	    }
	    printf("\n");

	multiply(mas, N);                   <- виклик функції multiply
	}

### 3. блок схема
