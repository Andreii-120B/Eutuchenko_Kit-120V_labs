#define LEN 5
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * @file lab11_4.c
 * @brief task number 4 from the laporatory practice
 * @author Eutuchenko Andreii.
 * @date 23-nov-2020
 * @version 0.1
 */
/**
* main func, task number 4 from the laporatory practice
* 
*/
int main()
{
	int mass[LEN][LEN] ={};
	for (int i = 0; i < LEN; i++)
	{
		for(int j = 0; j < LEN; j++)
		{
			mass[i][j] = rand()%10;
		}
	}
	for (int i = 0; i < LEN; i++)
	{
		for(int j = 0; j < LEN; j++)
		{
			printf("%d ", mass[i][j]);
			
		}	
		printf("\n");
	}
	int resmass[LEN];
	for (int i = 0; i < LEN; i++)
	{
		resmass[i] = mass[i][i];
	}
	printf("\n");
	printf("\n");
	for (int i = 0; i < LEN - 1; i++) {
    		for (int j = 0; j < LEN - 1; j++) {
      			if (resmass[j] > resmass[j + 1]) {
        			int b = resmass[j]; 
        			resmass[j] = resmass[j + 1]; 
        			resmass[j + 1] = b; 
      			}
    		}
  		}
	for (int i = 0; i < LEN; i++)
	{
		printf("%d ", resmass[i]);
	}
	return 0;
}
