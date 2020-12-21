#include <string.h>
#include <stdio.h>
/**
 * @file remakelab64.c
 * @brief Файл з четвертим завданням 6 лаборатороної роботи
 * "знайти кількість слів у тексті"
 * @author Eutuchenko Andreii.
 * @date 23-nov-2020
 * @version 0.1
 */
 
 /**
 * @brief Функція, що шукає кількість слів у тексті
 * @param текст
 * @return кількість слів	
 */
 
void count(char text[]){
	int size;
	int q = 0;
	while (text[q] != '\0'){
		q++;
		size = q;
	}
	size++;


    int chet = 0;
    for (int i = 0; i < size ; i++) {
        if (text[i] == ' ') {
            for (int j = i; ; j++) {
                if (text[j] == ' ') {
                }
            else {
                 chet++;
                 i = j;
                 break;
                }
            }
        }

    }
if (text[0] != ' '){
	chet++;

}
if (text[size - 2] == ' '){
	chet--;

}
    printf("%d\n", chet);
}






/**
* main функція, викликає функцію {@link count} декілька раз
* 
*/

int main()
{
    
    char text[] = {  " g g g g g g 1 31 fd" };
    count(text);
	return 0;
}
