#include <stdio.h>
int main()
{
  
//Делит натуральное число на простые множители
  int chislo;
  char s = '√';
  printf("Insert the number : ...\n" );
  scanf("%d", &chislo);
  float digit = chislo;
  if (chislo == 1) 
  {
    printf ("√1 = 1\n" );
  }
  else if (chislo == 0){
   printf ( "√0 = 0\n возможно, вы ввели не число\n" );
  }
  else if (chislo > 1) 
  {
    int i = 2;
    int m = 0;
    int mass[20] = {};
    for (i; i < chislo + 1; i++)
    {
      if (chislo % i == 0)
      {
        chislo = chislo / i;
        mass[m] = i;
        i--;
        m++;
      }

    }
    mass[m] = 1;
    //выводит массив (по приколу)
    /*  for (int i = 0; i < m; i++) {
        std::cout << mass[i] << std::endl;
      } */
      //Попарное выведение чисел

    int f = 0;
    int chel_proiz = 1;
    int podkor_proiz = 1;
    for (f; f < m; f++) {
      if (mass[f] == mass[f + 1]) {
        chel_proiz = chel_proiz * mass[f];
        mass[f] = 1;
        mass[f + 1] = 1;

      }
      else {
        podkor_proiz = podkor_proiz * mass[f];
      }

    }
    
    
    // Поиск корня методом Ньютона(методом касательных) * /
    float sqrt = digit / 2.f;
    float x;


      do
      {
        x = sqrt;
        sqrt = (x + (digit / x)) / 2.f;
      } while ((x - sqrt != 0.f));
      if (chel_proiz != 1) {


        if (podkor_proiz != 1) {
          printf ("%d√%d ", chel_proiz, podkor_proiz);
          printf ( "~ %f\n",  sqrt);
        }
        else {
          printf("%f\n", sqrt);
        }
      }
      else {
        printf ("√%d ", podkor_proiz );
        printf ("~ %f\n", sqrt);
      }
  }

  else {
    printf ( "The square root of a negative number is undefined\n");
  }
  return 0;
}
