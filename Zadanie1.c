#include <stdio.h>

void funkcja(int n){
	int i;
	while(n>=i*i)
        i++;
    printf("%d\n", i-1);
}

int main() {
    int n;
    printf("podaj liczbe n: ");
    scanf("%d", &n);
    funkcja(n);
return 0;
}
	
