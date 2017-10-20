#include <stdio.h>

int main() {
	float a, b;
	scanf("%f", &a);
	scanf("%f", &b);
	if (a>0 && b>0) printf("I, II, III cwiartka");
	if (a>0 && b<0) printf("I, III, IV cwiartka");
	if (a<0 && b>0) printf("I, II, IV cwiartka");
	if (a<0 && b<0) printf("II, III, IV cwiartka");
	if (a==0 && b>0) printf("I, II cwiartka");
	if (a==0 && b<0) printf("III, IV cwiartka");
	if (a>0 && b==0) printf("I, III cwiartka");
	if (a<0 && b==0) printf("II, IV cwiartka");
	if (a=0 && b==0) printf("wykres pokrywa siê z osi¹ OX");
	
	return 0;
}
