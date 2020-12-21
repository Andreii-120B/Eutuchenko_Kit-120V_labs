#include <string.h>
#include <stdio.h>



int main(void)
{
  char str[] = "45 sample text 45 with 324 numbers 2414";
    int x;
    int resmas[sizeof(str)];
    int chet = 0;
    for(int i = 0;i < strlen(str);i++)
    {
        if(str[i] != ' '){
            if((str[i] >= '1') && (str[i] <= '9') && (str[i] != ' '))
            {
                x = ((int)str[i] - 48);
                resmas[chet] = x;
                chet++;
                if( (str[i + 1] < '1') || (str[i + 1] > '9') )
                {
                resmas[chet] = 91292149;
                chet++;
                }
            }
        }
    }
    
    for (int i = 0; i < chet; i++)
    {
    	if (resmas[i] == 91292149)
    	{
	printf("\n");
    	}
    	else
    	{
    	    printf("%d", resmas[i]);
    	}
    }

    return 0;
}
