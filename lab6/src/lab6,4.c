#include <string.h>
#include <stdio.h>

int main()
{
    
    char text[] = {  " g g g g g g 1 31 fd" };
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
    return 0;
}
