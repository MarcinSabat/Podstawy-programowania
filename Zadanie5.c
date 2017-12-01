//
//  Zadanie5.c
//  
//
//  Created by Student on 01.12.2017.
//
//

#include <stdio.h>
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

double suma(double **tab, int n, int m){
    int i, j;
    double suma=0;
    for(;i<n;i++){
        for(j=0;j<m;j++){
            suma+=tab[i][j];
        }
    }
}


double maxindeks(double **tab, int n, int m){
    int i, j;
    double suma=0;
    int indeks=0;
    for(i=0;i<n;i++){
        double suma_biezaca=0;
        for(j=0;j<m;j++){
            suma_biezaca+=tab[i][j];
        }
        if(suma_biezaca>suma){
            suma=suma_biezaca;
            indeks=i;
        }
    }
    return indeks;
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
    printf("%lf", maxindeks(tab, 3, 2));
    
    return 0;
}
