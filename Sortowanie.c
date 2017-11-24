//
//  Sortowanie.c
//  
//
//  Created by Student on 24.11.2017.
//
//

#include <stdio.h>


int sort(int* tab, int l){
    int i, j;
    for(i=0; i<l-1; i++){
        for(j=i+1; j<l; j++){
            if (tab[j]<tab[i]){
                int p=tab[j];
                tab[j]=tab[i];
                tab[i]=p;
            }
        }
    }
}
