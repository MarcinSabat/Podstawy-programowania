#include <stdio.h>

int main() {
	printf("podaj a, x, b\n");
	int a, x, b;
	scanf("%d", &a);
	scanf("%d", &x);
	scanf("%d", &b);
	int y;
	y=a*x+b;
	printf("%d*%d+%d=%d\n", a, x, b, y);
	
	return 0;
}
