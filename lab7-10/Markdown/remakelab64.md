# Звіт до завдання 6.4

Знайти кількість слів у тексті 

###1. функція count

	void count(char text[]){
		int size;
		int q = 0;
		while (text[q] != '\0'){     <- Визначає  розмір тексту
			q++;
			size = q;
		}
		size++;
	
	
 	   int chet = 0;
    
 	   for (int i = 0; i < size ; i++) {     <- визначає кількість слів у тексті
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
	if (text[0] != ' '){              <- опрацьовує виключення, коли перша літера тексту - пробіл
		chet++;

	}
	if (text[size - 2] == ' '){      <- опрацьовує виключення, коли перша остання тексту - пробіл
		chet--;

	}
	    printf("%d\n", chet);
	}

### 2. main функція 

	int main()
	{
    
    		char text[] = {  " g g g g g g 1 31 fd" };    <- текст
   		count(text);                                  <- викликає функцію count
		return 0;
	}

### 3. блок-схема
![text](file:///home/andreii/lab/lab07/Markdown/img/lab64)
