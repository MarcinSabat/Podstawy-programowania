#include <stdio.h>

int funkcja(int x){
	int cyfra3=0;
	while(x!=0){
		if((x%10)%3==0) cyfra3++;
		x=x/10;
	}
	return cyfra3;
}

int main() {
	printf("%d", funkcja(364364));
	return 0;
}
