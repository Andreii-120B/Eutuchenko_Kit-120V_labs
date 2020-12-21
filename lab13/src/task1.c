#include <string.h>
#include <stdio.h>
#include <locale.h>


int main(void)

{

	// Вывод по алфавиту 

//функция для сортировки строк по возрастанию
    int toAlphabet (const void * a, const void * b)
    {
    	return strcmp(*(char**)a,*(char**)b);
    }

 
    const int N = 28;
    char string[] = "hello world";
    
    char sep[10]=" ";
    // Переменная, в которую будут заноситься начальные адреса частей
    // строки str
    char *istr;

    // Выделение первой части строки
    istr = strtok (string,sep);

    int k = 0;

    char * s[200];

    //выделение последующих частей и занесение из изначального массива в массив s
    while (istr != NULL)
    {
        s[k] = istr;
        istr = strtok(NULL,sep); 
        k++;
    }

    printf("%d\n", k);

    int i = 0; 
 
    //сортировка по возрастанию
    qsort (s, k, sizeof(char**), toAlphabet); //about and hi i that the this url
    
    //вывод результатов на экран
    for(i=0; i<8; i++){
	if (s[i] != '\0')
	{
        printf("%s ", s[i]);
	}
    }

    printf("\n");


	
	return 0;
}



















