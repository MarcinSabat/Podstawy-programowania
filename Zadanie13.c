#include <stdio.h>

int main() {
	int suma=0, n;
	int i;
	while(suma<=100){
		scanf("%d", &n);
		suma=suma+n;
	}
	printf("%d", suma-100);
	return 0;
}
