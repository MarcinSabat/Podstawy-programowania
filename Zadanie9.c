//
//  Zadanie9.c
//  
//
//  Created by Student on 24.11.2017.
//
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char *napis1, *napis2, *napis3;
    napis1=malloc(100*sizeof(char*));
    napis2=malloc(100*sizeof(char*));
    napis3=malloc(100*sizeof(char*));
    
    fgets(napis1, 100, stdin);
    fgets(napis2, 100, stdin);
    strcpy(napis3, napis1);
    strcat(napis3, napis2);
    fputs(napis3, stdout);
    
    return 0;
}
