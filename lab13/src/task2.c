#include <string.h>
#include <stdio.h>


int main(void)
{
	char text[] = "Иванов, Стрелецкий, Климко, Жуков, Иванов, Стрелецкий, Сидоров";
	
	char newtext[sizeof(text) / sizeof(char) - 4];
	printf("text =  %s\n", text);
	char *find = strrchr(text, ',');
	while (1 == 1)
	{
	find = strrchr(text, ',');
	if (find != NULL)
	{
	
		if (strstr(newtext, find + 1) == NULL)
		{
			strcat(newtext, find + 1);
			strcat(newtext, ", ");
			memset(find, '\0', sizeof(find));

		}
		else 
		{
			memset(find, '\0', sizeof(find));
		}
	}	
	else{break;}
	}
	if (strstr(newtext, text) == NULL)
	{
	strcat(newtext, text);
	}
	printf("newtext =  %s\n", newtext);
return 0;
}














