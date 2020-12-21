# Звіт до завдання 6.5

"Виконати циклічне зрушення массиву Н * Н вліво"

###1. функція shift

	void shift(int mas[3][3], const int N)
	{
    		int resmas[N][1];
   		 for (int i = 0; i < N; i++) {  <- збереження в резерв
    	    resmas[i][0] = mas[i][0];
    	}


    	for (int i = 0; i < N; i++)
    	{
    	    for (int j = 0; j < N; j++)
    	    {
    	        mas[j][i] = mas[j][i + 1];    <- зрушення 
    	    }

   	 }
    
   	 for (int i = 0; i < N; i++) {
   	     mas[i][N - 1] = resmas[i][0];     <- занесеня резерву в основний масив
   	 }

   	 for (int i = 0; i < N; i++)
   	 {
   	     for (int j = 0; j < N; j++)
   	     {
   	         printf("%d ", mas[i][j]);    <- вивід результуючого масиву
   	                
   	     }printf("\n");
   	 }
   	 
### 2. main функція 

	int main()
	{
  
	    const int N = 3;
	    int mas[N][N];
	    for (int i = 0; i < N; i++)
	    {
	        for (int j = 0; j < N; j++)    <- Заповнення масива
	        {
	            mas[i][j] = rand() % 10;
	        }
	    }

	
	    for (int i = 0; i < N; i++)
	    {
	        for (int j = 0; j < N; j++)        <-   вивід масива 
	        {
	            printf("%d ", mas[i][j]);
	        }printf("\n");
        
        
	    }
	    printf("\n");
	    printf("\n");
	    printf("\n");
	    shift(mas, N);
	}
### 3. блок-схема

