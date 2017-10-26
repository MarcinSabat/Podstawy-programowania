#include <stdio.h>

float pole_trojkata(float a, float h){
	return (1.0/2.0)*a*h;
}

int main() {
	printf("%f", pole_trojkata(3, 3));
	
	return 0;
}
