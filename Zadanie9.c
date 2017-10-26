#include <stdio.h>

int funkcja(int n){
	if(n==0) return 1;
	if(n%2!=0) return n*n;
	if(n%2==0) return n*n-5;
}

int main() {
	printf("%d", funkcja(4));
	return 0;
}
