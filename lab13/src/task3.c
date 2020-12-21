#include <stdio.h>

#define len_mass 11 //Максимальная линна массива, введенного пользователем 
#define LENALP 26 // Длинна английского алфавита


int main(void)
{
	char mass[len_mass] = { "make lab for glory" }; 
	char alphabet[LENALP] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	  int quatity[LENALP] = {};
	  int chet = 0;
	  for (int i = 0; i < LENALP; i++) 
	  {
	    chet = 0;
	    for ( int j = 0; j < len_mass; j++)
	    {
	      if (alphabet[i] == mass[j]) {
	        chet++;
	      }
    
	    }
	    quatity[i] = chet;
	  //  printf("%d ", quatity[i]); 
	  }

	printf("\n");
  int sum = 0;
  for (int i = 0; i < LENALP; i++)
  {
    sum = sum + quatity[i];
  }


  float period[LENALP] = {};

  for (int i = 0; i < LENALP; i++) 
  {

    period[i] = (float)quatity[i] / sum;
   if(period[i] != 0)
   {
    printf("%f ", period[i]); 
    printf("%c\n", alphabet[i]);
    }
  }
return 0;
}














