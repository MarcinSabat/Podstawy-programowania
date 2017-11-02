#include <stdio.h>

int funkcja(int a){
	int suma, i;
	suma=0;
	for(i=a; i>=a-2; i--){
		suma=suma+i;
	}
	return suma;
}

int main() {
	printf("%d", funkcja(10));
	return 0;
}
