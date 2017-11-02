#include <stdio.h>

void funkcja(float cena, float podwyzka, float prog){
	float procent=podwyzka/100.0;
	int i;
	while(prog>=cena*procent+cena){
		cena=cena*procent+cena;
		i++;
	}
	printf("cena przekroczy punkt krytyczny po %d podwyzkach", i+1);
}

int main() {
	funkcja(10,50,100);
	return 0;
}
