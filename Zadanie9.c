#include <stdio.h>

int main() {
	float max;
	float a, b, c;
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	max=a;
	if(max<b) max=b;
	if (max<c) max=c;
	if(a*a+b*b+c*c-max*max==max*max) printf("T");
	else printf("N");
	
	return 0;
}
