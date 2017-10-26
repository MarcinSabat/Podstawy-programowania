#include <stdio.h>

int funkcja(int a){
	int i, suma=0;
	for(i=1; i<=a; i++)
		{
			if(i%2!=0)
				suma=suma+i;
		}
		return suma;
}

int main() {
	printf("%d", funkcja(10));
	return 0;
}
