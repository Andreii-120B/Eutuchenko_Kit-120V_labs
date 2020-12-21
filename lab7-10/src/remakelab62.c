#include <stdio.h>
#define LEN 120

/**
 * @file remakelab62.c
 * @brief Файл з другим завданням 6 лаборатороної роботи
 * "Заповнити масив заданого розміру простими числами, що не повторюються"
 * @author Eutuchenko Andreii.
 * @date 23-nov-2020
 * @version 0.1
 */
 
 /**
 * @brief Функція, заповнюе масив простими числами
 * @param  числовий массив 
 * @return заповнений числовий масив	
 */
void simple_mass(int mass[])
{
	  int chet = 0;
  for (int i = 2; chet < LEN; i++) {
    for (int j = 2; j < i; j++) {
      if (i % j == 0) { break; }
      else {
        if (i == (j + 1)) {
          mass[chet] = i;
          chet++;
        }
        else { continue; }
      }


    }
  }

}

/**
* main функція, викликає функцію {@link simple_mass} 
* 
*/
int main()
{

    int mass[LEN] = {};
	simple_mass(mass);
	   
	          
	for (int i = 0; i < LEN; i++)
	{         
		printf ("%d  ", mass[i]);
	}
}

