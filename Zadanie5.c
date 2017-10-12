#include <stdio.h>


int main() {
	char a, b, c, d;
	scanf("%c\n", &a);
	scanf("%c\n", &b);
	scanf("%c\n", &c);	
	scanf("%c", &d);
	printf("%c%c%c%c\n", a, b, c, d);
	printf("%c%c%c%c\n", a, b, d, c);
	printf("%c%c%c%c\n", a, c, b, d);	
	printf("%c%c%c%c\n", a, c, d, b);
	return 0;
}
