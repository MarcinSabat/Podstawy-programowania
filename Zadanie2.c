//
//  Zadanie2.c
//  
//
//  Created by Student on 15.12.2017.
//
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    char liczba[20];
    //fgets=(liczba, 20, stdin);
    //n=atoi(liczba);
    printf("podaj liczbe napisow\n");
    scanf("%d\n", &n);
    char **tab=malloc(n*sizeof(char**));
    int i;
    for(i=0; i<n; i++){
        tab[i]=malloc(20*sizeof(char*));
        
        fgets(tab[i], 20, stdin);
    }
    for(i=0; i<n; i++){
        fputs(tab[i], stdout);
    }
    return 0;
}
