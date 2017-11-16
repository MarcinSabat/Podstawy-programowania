//
//  Zadanie6.c
//  
//
//  Created by Student on 16.11.2017.
//
//

#include <stdio.h>
#include <stdlib.h>


int main(){
    
    int n;
    scanf("%d", &n);
    float *tab=malloc(n * sizeof(float*));
    int i;
    for(i=0; i<n; i++){
        scanf("%f",tab+i);
    }
    float suma=0;
    float max;
    for(i=0;i<n;i++){
        suma=suma+ *(tab+i);
        if(i==0) max=*tab;
        else if(*(tab+i)>max)
            max=*(tab+i);
    }
    printf("%f %f", suma, max);
    
    return 0;
    
    
}
