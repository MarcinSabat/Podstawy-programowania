#include <stdio.h>

void funkcja(int n, int m){
	int i;
	for(i=n-1; i>0; i--){
		if(i%m==0) printf("%d ", i);
	}
}

int main() {
	funkcja(10, 2);
	return 0;
}
