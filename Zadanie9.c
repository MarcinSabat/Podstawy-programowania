#include <stdio.h>


int main() {
	int a1, a2, b1, b2, n;
	scanf("%d", &a1);
	scanf("%d", &a2);
	scanf("%d", &b1);
	scanf("%d", &b2);
	//scanf("%d", &n);
	int poczatek, koniec, i;
	if (a1>b1)	poczatek=a1;
	else poczatek=b1;
	if (a2<b2) koniec=a2;
	else koniec=b2;
	for(i=poczatek; i<=koniec; i++)
		printf("%d", i);
	
	
	return 0;
}
