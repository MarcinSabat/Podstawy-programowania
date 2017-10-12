#include <stdio.h>

int main() {
	int a, h;
	float P;
	printf("a=");
	scanf("%d", &a);
	printf("h=");
	scanf("%d", &h);
	P=(float)a*h/2;
	printf("Pole=%f", P);
	return 0;
}
