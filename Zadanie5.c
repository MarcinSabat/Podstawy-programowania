//
//  Zadanie5.c
//  
//
//  Created by Student on 15.12.2017.
//
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *min(int **tab, int n, int m){
    int i, j;
    int *min=&tab[0][0];
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
        if(tab[i][j]<*min)
            min=&tab[i][j];
        }
    }
    return min;
}

int main(){
    srand(time(NULL));
    int **tab=malloc(4*sizeof(int**));
    int i;
    for(i=0; i<4; i++){
        tab[i]=malloc(4*sizeof(int*));
    }
    int j;
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            tab[i][j]=rand()%100;
        }
    }
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    printf("%d\n", *min(tab, 4, 4));
    
    return 0;
}
