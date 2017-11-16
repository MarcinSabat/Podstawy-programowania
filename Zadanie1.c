//
//  Zadanie1.c
//  
//
//  Created by Student on 16.11.2017.
//
//

#include <stdio.h>

int funkcja(int *wsk, int *wsk2){
    if(*wsk>*wsk2) return *wsk;
    else return *wsk2;
    //return *wsk>*wsk2 ? *wsk :*wsk2;
    
}


int main(){
    int a=10;
    int b=20;
    
    printf("%d", funkcja(&a, &b));
    
    
}
