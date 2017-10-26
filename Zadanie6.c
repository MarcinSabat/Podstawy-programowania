#include <stdio.h>

int funkcja(int n){
	if(n==0) return 1;
	else return funkcja(n-1)*2;
}

int main() {
	printf("%d", funkcja(10));
	return 0;
}
