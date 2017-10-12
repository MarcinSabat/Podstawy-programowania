#include <stdio.h>


int main() {
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	float srednia;
	srednia=3.0/((1.0/a)+(1.0/b)+(1.0/c));
	printf("%f\n", srednia);
	return 0;
}
