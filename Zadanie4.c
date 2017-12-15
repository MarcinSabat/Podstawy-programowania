//
//  Zadanie4.c
//  
//
//  Created by Student on 15.12.2017.
//
//

#include <stdio.h>
#include <stdlib.h>

int *tablica_2d(int n, int m){
    int **arr=malloc(n*sizeof(int**));
    int i;
    for(i=0;i<n;i++){
        arr[i]=malloc(m*sizeof(int*));
    }
    arr[0][0]=6;
    return *arr;
}

int tablica_1d(int n){
    int *arr=malloc(n*sizeof(int*));
    *arr=1;
    return arr;
}

int main(){
    
    int *wsk1=tablica_2d(4, 4);
    printf("%d\n", *wsk1);
    
    int *wsk2=tablica_1d(4);
    printf("%d\n", *wsk2);
    int i;
    for(i=0; i<4; i++){
        printf("%d " wzk[i]);
        
    }

    
}
