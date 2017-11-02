#include <stdio.h>

int abs(int x){
	if(x<0) return -x;
	else return x;
}

int main() {
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);
	printf("%f", (abs(x)+abs(y))/2.0);
	
	return 0;
}
