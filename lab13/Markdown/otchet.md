# Звіт до завдання 4

знайти усі числа у тексті 


###1. Функція Digitftxt

		int Digitftxt(char str[], int resmas[])
		{
			int x;   
			
			int chet = 0; <-- count element in result mass

			for(int i = 0;i < strlen(str);i++) <-- find NOdigit in string and set ' '
			{
				if(str[i] != ' ')
			{
				if((str[i] >= '1') && (str[i] <= '9') && (str[i] != ' '))
				{
				x = ((int)str[i] - 48);
				resmas[chet] = x;     <-- int x in resmas
				chet++;
				if( (str[i + 1] < '1') || (str[i + 1] > '9') )
				{
				resmas[chet] = 91292149;  <--separator
				chet++;
				}
				}
			}
			}
			return chet;
		}

###2. Функція printer

		void printer(int resmas[], int chet)
		{
		//print mass in terminal
		for (int i = 0; i < chet; i++)  < for all mass
		{
		if (resmas[i] == 91292149) <-- Separator
		{
		printf("\n");
	    	}
		else
		{
		printf("%d", resmas[i]);
		}
		}
		}

###3. MAIN Функція

		int main(void)
		{
			// text 
		char str[] = "sample text 452 with 324 numbers 2414";

		
		int * resmas = calloc(strlen(str), sizeof(int)); <-- int mass for result
		
		int chet = Digitftxt(str, resmas); <<--  func Digitftxt

		printer(resmas, chet); <<-- func pointer
	
		return 0;
		}
		
###4. блок-схема програми

![text](file:///home/andreii/lab/finallabs/lab13/Markdown/block)


