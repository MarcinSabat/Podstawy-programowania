#include <stdio.h>

int funkcja(int n){
	int i, j, liczba_dzielnikow;
	for(i=n+1; ;i++){
		liczba_dzielnikow=0;	
		for(j=2; j<=i/2; j++){
			if(i%j==0)
				liczba_dzielnikow++;
		}
		if(liczba_dzielnikow==0)
		 	return i;
	}	
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", funkcja(n));
	return 0;
}
