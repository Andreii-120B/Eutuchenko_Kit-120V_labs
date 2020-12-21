#include <stdio.h>

int main()
{
  int a = 496;
  int i = 1;
  int b = 0;
  for (i = 1; i < a; i++) {
    if (a % i == 0 ) 
    {
      b = b + i;
    }
  }
  if (a == b) {
    printf( "Число идеальное");
  }
  else {
    printf( "Число не идеальное");
  }
}
