#include <stdio.h>

float abs(float x){
	if(x<0) return -x;
	else return x;
}

int main() {
	float x1, y1, x2, y2;
	scanf("%f", &x1);
	scanf("%f", &y1);
	scanf("%f", &x2);
	scanf("%f", &y2);
	float pole;
	pole=abs(x1-x2)*abs(y1-y2);
	printf("%f", pole);
	return 0;
}
