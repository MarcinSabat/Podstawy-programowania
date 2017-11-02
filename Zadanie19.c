#include <stdio.h>

int a(int n){
	int i, suma=0;
	if(n<6) return n;
	for(i=1; i<=3; i++) suma=suma+a(n-2*i);
	if(n>=6) return suma;
}

int main() {
	printf("%d", a(9));
	return 0;
}
