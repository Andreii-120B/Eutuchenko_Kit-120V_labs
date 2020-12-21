#include <stdio.h>



/**
 * @file remakelab61.c
 * @brief Файл з першим завданням 6 лаборатороної роботи
 * "Центрувати заданий рядок"
 * @author Eutuchenko Andreii.
 * @date 23-nov-2020
 * @version 0.1
 */
 
 
#define LEN 15 /** <- довжина рядка */


 /**
 * @brief Функція, що центрує рядок
 * @param масив чарів 
 * @return відредагований масив чарів	
 */
 
void centring(char mass[])
{

  int centr = 0;
  int shetSlov = 0;
  int firstChar;

  for (int i = 0; i < LEN; i++) {
    if (mass[i] != ' ') {
      firstChar = i;
      break;

    }
  }
  for (int i = 0; i < (LEN - 1); i++) {
    if (mass[i] != '\0' && mass[i] != ' ') {
      shetSlov++;

    }
    if (mass[i] == ' ' && mass[i + 1] != ' ' && mass[i - 1] != ' ')
    {
      shetSlov++;
    }
  }

  centr = ((LEN - shetSlov) / 2);
  char newmass[LEN];
  for (int i = 0; i < (LEN - 1); i++) {
    newmass[i] = '_';
  }
  for (int i = 0; i < shetSlov; i++) {
    newmass[centr + i] = mass[i + firstChar];
  }
  for (int i = 0; i < LEN - 1; i++) {
    mass[i] = newmass[i];
  }
}






/**
* main функція, викликає функцію {@link centring} 
* 
*/
int main()
{
  char mass[LEN] = "  Ivan d  ";
  centring(mass);
  printf("%s\n", mass);
}
