# Звіт до завдання 6.2

Заповнити масив простими числами, що не повторюються

###1. функція simple_mass

	void simple_mass(int mass[])
		{
		int chet = 0;
		for (int i = 2; chet < LEN; i++)      <- цикл, що перебирає числа 
		{
			for (int j = 2; j < i; j++)    <- цикл, що перевіряє чи є число простим
			{
				if (i % j == 0) { break; }
				else {
					if (i == (j + 1)) 
					{
					mass[chet] = i;
					chet++;
					}
					else { continue; }
				     }
			}
		}

		}		
		
### 2. main функція 
	
	int main()
	{
	    int mass[LEN] = {};     <- створює масив розміром LEN
		simple_mass(mass);  <- викликає функцію
		for (int i = 0; i < LEN; i++) <- виводить результат
		{
			printf ("%d  ", mass[i]);
		}
	}
	
### 3. блок-схема

![text](file:///home/andreii/lab/lab07/Markdown/img/lab62)
