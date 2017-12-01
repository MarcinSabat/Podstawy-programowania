//
//  Zadanie1.c
//  
//
//  Created by Student on 01.12.2017.
//
//

#include <stdio.h>
#include <stdlib.h>


double **funkcja(int n, int m){
    int i;
    double **arr=malloc(n*sizeof(double**));
    for(i=0;i<n;i++){
        arr[i] = malloc(m*sizeof(double*));
    }
    return arr;
}

int main(){
    double **tab=funkcja(3, 3);
    //double tab[3][2];
    int i, j;
    for(i=0; i<3; i++){
        for(j=0;j<3;j++){
            tab[i][j]=i*j;
        }
    }
    for(i=0; i<3; i++){
        for(j=0;j<3;j++){
            printf("%.0lf  ", tab[i][j]);
            }
        printf("\n");

    }
    
            
    return 0;
}
