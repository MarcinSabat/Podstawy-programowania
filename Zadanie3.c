#include <stdio.h>


int main() {
	int x, y;
	x=6;
	y=10;
	int suma, roznica, iloczyn, modulo;
	float iloraz;
	suma=x+y;
	roznica=x-y;
	iloczyn=x*y;
	iloraz=(float)x/y;
	modulo=x%y;
	printf("\nsuma=%d", suma);
	printf("\nroznica=%d", roznica);
	printf("\niloczyn=%d", iloczyn);
	printf("\niloraz=%f", iloraz);
	printf("\nmodulo=%d\n", modulo);
	return 0;
}
