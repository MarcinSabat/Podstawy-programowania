#include <stdio.h>

int funkcja(int n){
	int i;
	while(n>=i*i*i)
        i++;
    return i-1;
}

int main() {
	printf("%d", funkcja(26));
	return 0;
}
