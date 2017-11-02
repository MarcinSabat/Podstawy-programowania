#include <stdio.h>
#include <math.h>

float funkcja(float x1, float y1, float x2, float y2){
	return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}

int main() {
	float x1=2;
	float y1=5;
	float x2=5;
	float y2=9;
	printf("%f", funkcja(x1, y1, x2, y2));
	
	return 0;
}
