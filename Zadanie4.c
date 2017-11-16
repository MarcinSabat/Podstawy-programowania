//
//  Zadanie4.c
//  
//
//  Created by Student on 16.11.2017.
//
//

#include <stdio.h>
#include <stdlib.h>

float *funkcja(){
    float *wsk=(float *) malloc(sizeof(float*));
    return wsk;
}

int main(){
    float *a=funkcja();
    *a=10.5132;
    printf("%f", *a);
    return 0;
}
