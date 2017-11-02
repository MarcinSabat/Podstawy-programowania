#include <stdio.h>

int funkcja(int p, int n){
	if(n==0) return 1;
	else return funkcja(p, n-1)*p;
}

int main() {
	printf("%d", funkcja(4, 3));
	return 0;
}
