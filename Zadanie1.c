#include <stdio.h>

int max;

int main() {
	int a, b, c; 
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	max=a;
	if(max<b) max=b;
	if (max<c) max=c;
	printf("najwieksza liczba to: %d\n", max);
	return 0;
}
