# Звіт до завдання 6.1

Центруати заданий рядок з заданим заповнювачем

###1. функція centring


		void centring(char mass[])
		{

		int centr = 0;
		int shetSlov = 0;
		int firstChar;
	
		for (int i = 0; i < LEN; i++) <- Цикл, що шукає перший ненульовий символ
		{
			if (mass[i] != ' ') 
			{
			firstChar = i;
			break;
			}
		}
		
		for (int i = 0; i < (LEN - 1); i++) <- Цикл, що рахує кількість літер у слові
		{
		if (mass[i] != '\0' && mass[i] != ' ') {
		shetSlov++;
		}
		
		if (mass[i] == ' ' && mass[i + 1] != ' ' && mass[i - 1] != ' ') <- Опрацювання виключення, якщо введено декілька слів через " " 
		{
			shetSlov++;
		}
		}
		
		centr = ((LEN - shetSlov) / 2);
		char newmass[LEN];
		
		for (int i = 0; i < (LEN - 1); i++) <- заповнення порожнього масиву "заповнювачем"
		{
			newmass[i] = '_';
		}
		for (int i = 0; i < shetSlov - 1; i++) <- заповннея масиву з заповнювачем введеним словом
		{   
			newmass[centr + i] = mass[i + firstChar];
		}
		for (int i = 0; i < LEN - 1; i++) <- програма зберігає новий масив на місце старого 
		{ 
		mass[i] = newmass[i];
		}
		}
		
### 2. main функція 

		int main()
		{
		char mass[LEN] = "  Ivan  ";  <- введеня слова
		centring(mass);               <- виклик функції
		printf("%s\n", mass);
		}
		
### 3. блок-схема

![text](file:///home/andreii/lab/lab07/Markdown/img/lab61)
