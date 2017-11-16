//
//  Zadanie7.c
//  
//
//  Created by Student on 16.11.2017.
//
//

#include <stdio.h>
#include <stdlib.h>


int *funkcja(int *tab1, int *tab2, int *tab3, int n){
    int i=0;
    int *tab4=malloc(n*sizeof(int*));
    for(;i<n;i++){
        if(*(tab1+i)>=0{
            *(tab4+i)==(tab2+i);
        }
           else{
               *(tab4+i)=*(tab3+i);
           }
    }
    return tab4;
    
}

int main(){
    int tab1[4]={0, -1, -2, 3};
    int tab2[4]={2, 4, 6, 8};
    int tab3[4]={1,3,5,7};
    
    int *tab4=funkcja(tab1,tab2,tab3,4);
    
    int i=0;
    for(;i<4;i++)
        printf("%d", tab4[i]);
    
    free(tab4);
}
