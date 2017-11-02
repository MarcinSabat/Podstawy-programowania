#include <stdio.h>

int funkcja(int x, int y){
	if(y==0) return x;
	else if(x==0) return y;
	else return funkcja(x-1, y)+funkcja(x, y-1);
}

int main() {
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);
	printf("%d", funkcja(x, y));
	
	return 0;
}
