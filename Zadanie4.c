#include <stdio.h>


int main() {
	int i;
	while(++i<=10000){
		if(i%2==0) printf("%d, ", i);
	}
	return 0;
}
