#include <stdio.h>

void funkcja(){
	int a;
	scanf("%d", &a);
	int i;
	for(i=1; i<=a; i++)
		if(a%i==0) printf("%d ", i);
}

int main() {
	funkcja();
	return 0;
}
