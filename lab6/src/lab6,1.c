#include <stdio.h>
#define LEN 15

int main()
{
  int centr = 0;
  char mass[LEN] = "   Ivanov Ivan ";
  int shetSlov = 0;
  int firstChar;
  
  for (int i = 0; i < LEN; i ++ ){
  if (mass[i] != ' '){
  	firstChar = i;
  	break;
  
  }
  }
  
  
  
  
  for (int i = 0; i < (LEN - 1); i++) {
    if (mass[i] != '\0' && mass[i] != ' ') {
      shetSlov++;

    }
    if (mass[i] == ' ' && mass[i+1] != ' ' && mass[i-1] != ' ')
    {
    	shetSlov++;
    }
  }

  centr = ((LEN - shetSlov) / 2);
  char newmass[LEN] = {};
  for (int i = 0; i < (LEN - 1); i++) {
    newmass[i] = '_';
  }
  for (int i = 0; i < shetSlov; i++) {
    newmass[centr + i] = mass[i + firstChar];
  }
  printf("%s\n", newmass);
}
