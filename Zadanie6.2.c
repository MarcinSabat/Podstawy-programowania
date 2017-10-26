#include <stdio.h>

int funkcja(int k, int n){
	if(n==0) return 1;
	else return funkcja(k, n-1)*k;
}

int main() {
	printf("%d", funkcja(3, 3));
	return 0;
}
