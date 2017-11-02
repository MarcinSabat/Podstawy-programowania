#include <stdio.h>

int maximum(int a, int b){
  if(a>b) return a;
   else return b;  
}

int minimum(int a, int b){
   return -maximum(-a, -b);
}

int main(){
    int a, b;
    printf("podaj a: ");
    scanf("%d", &a);
    printf("podaj b: ");
    scanf("%d", &b);
    printf("%d\n", minimum(a, b));
    return 0;
}
