//
//  Zadanie7.c
//  
//
//  Created by Student on 24.11.2017.
//
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
    
}


int main(){
    srand(time(NULL));
    int tab[100];
    int i;
    for(i=0; i<100; i++)
        tab[i]=(rand()%100);
    for(i=0; i<100; i++){
        printf("%d\n", tab[i]);
    }
    qsort(tab, 100, sizeof(int), compare);
    printf("\n\n");
    for(i=0; i<100; i++)
        printf("%d\n", tab[i]);
    return 0;
}
