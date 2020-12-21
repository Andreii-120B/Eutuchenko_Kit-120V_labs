#include <string.h>
#include <stdio.h>

/**
 * @file remakelab63.c
 * @brief Файл з третім завданням 6 лаборатороної роботи
 * "Перетворити число в рядок"
 * @author Eutuchenko Andreii.
 * @date 23-nov-2020
 * @version 0.1
 */
 
 /**
 * @brief Функція, що переводить число в рядок
 * @param ціле число, не більше 9999
 * @return Логічну відповідь у консоль	
 */
 
void digitToString(int VALUE){
	char *DIGIT[10] = { " ", "один", "два", "три", "чотири", "п'ять", "шість", "сім", "вісім", "дев'ять" };
    char *TENS[10] = { " ", "десять", "двадцять ", "тридцять", "сорок", "п'ятдесят" ,"шістдесят" , "сімдесят" ,"вісімдесят" ,"дев'яносто" };
    char *HUNDREDS[10] = { " ","сто","двісті","триста","чотириста","п'ятсот","шістсот","сімсот","вісімсот","дев'ятсот"};
    char *THOUSANDS[10] = { " ","Тисяча","Дві тисячі","Три тисячі","Чотири тисячі","п'ять тисяч","Шість тисяч","Сім тисяч","Вісім тисяч","Дев'ять тисяч" };
    char *EXCEPTIONS[9] = {"одинадцять","дванадцять","тринадцять ","чотирнадцять","п'ятнадцять","шістнадцять","сімнадцять","вісімнадцять","дев'ятнадцять" };

    char *result[4];
    if (VALUE > 0) {
    
      if (VALUE >= 1 && VALUE % 10 != 0) {
        result[3] = DIGIT[(VALUE % 10)];
     }
      if (VALUE >= 10 && VALUE / 10 % 10 != 0) {
        result[2] = TENS[(VALUE / 10 % 10)];
    }
    for (int i = 11; i < 20; i++) {
      if (VALUE % 10 + (VALUE / 10 % 10) *10  == i) {
        result[3] = '\0';
        result[2] = EXCEPTIONS[i%10 - 1];
      }
    }
    if (VALUE >= 100) {
      result[1] = HUNDREDS[(VALUE / 100 % 10)];
    }
    if (VALUE >= 1000 && VALUE / 1000 != 0) {
      result[0] = THOUSANDS[(VALUE / 1000)];
    }
  }
  char *RESULT[4];
  for (int i = 0; i < 4; i++) {
  if (result[i] != NULL){
    printf("%s ", result[i]);
    }

  }
      printf ("\n");
}


/**
* main функція, викликає функцію {@link digitToString} 
* 
*/

int main()
{

  int VALUE = 1337;
  
  digitToString(VALUE);
  
}









