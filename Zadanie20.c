#include<stdio.h>

int funkcja(int x, int y){
if(x==y) 
	return x;
else if(x>y)
	return 2*funkcja(x/y, y);
else
	return 2*funkcja(x, y/x);
}

