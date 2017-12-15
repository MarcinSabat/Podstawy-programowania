//
//  Zadanie1.c
//  
//
//  Created by Student on 15.12.2017.
//
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int **tab=malloc(4*sizeof(int));
    int i;
    for(i=0; i<4; i++){
        *(tab+i)=malloc(4*sizeof(int*));
    }
    int j;
    for (i=0; i<4; i++){
        for(j=0; j<4; j++){
            *(*(tab+i)+j)=(rand()%10+1);
        }
    }
    for (i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("%d ", *(*(tab+i)+j));
        }
        printf("\n");
    }
    return 0;
}
