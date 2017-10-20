#include <stdio.h>


int main() {
	
	int i, j, liczba_dzielnikow;
	i=2;
	for(i; i<10000; i++){
		liczba_dzielnikow=0;
		for(j=2; j<=i/2; j++){
			if(i%j==0)
				liczba_dzielnikow++;
		}
		if(liczba_dzielnikow==0)
		 	printf("%d ",i);
	}
	
		
	return 0;
}
