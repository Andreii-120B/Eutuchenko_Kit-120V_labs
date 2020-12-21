#include <stdio.h>
int main()
{
	int k,m,n,addi;
	
	k = 3;
	m = 4;
	n = 0;
	if (m == k || m == n || k == n){
		printf ("Условие не соотвествует заданию");
	}else {
		if (n<m){
			addi = n;
			n = m;
			m = addi;
			} if (m < k){
			addi = m;
			m = k;
			k = addi;
			} if (n<m){
			addi = n;
			n = m;
			m = addi;
		}


		printf ("%d\n", k);
		printf ("%d\n", m);
		printf ("%d\n", n);
	}

	return 0;
}
