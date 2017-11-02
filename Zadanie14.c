#include <stdio.h>

int funkcja(float a, float b){

	if(a-(int)a==b-(int)b) return 1;
	else return 0;
}

int main() {
	printf("%d", funkcja(3.325, 1.325));
	return 0;
}
