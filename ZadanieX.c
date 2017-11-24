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
    char *napis1, *napis2;
    napis1=malloc(100*sizeof(char*));
    fgets(napis1, 100, stdin);
    
    int i;
    
    for(i=0; i<strlen(napis1); i++){
    napis2=strchr(napis2, 'a');
    printf("%c", *napis2);
    }
    
    
    fputs(napis1, stdout);
    
    return 0;
}
