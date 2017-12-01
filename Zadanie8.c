//
//  Zadanie8.c
//  
//
//  Created by Student on 01.12.2017.
//
//
#include <stdio.h>
#include <stdlib.h>

int funkcja(char** t1, int t1a, int t1b, char** t2, int t2a, int t2b);

int search(char** t2, int a, int b, int x);

int main(){
    int i;
    char **t1=malloc(3*sizeof(char**));
    for(i=0; i<3; i++)
        t1[i]=malloc(3*sizeof(char**));
    
    char **t1=malloc(4*sizeof(char**));
    for(i=0; i<3; i++)
        t2[i]=malloc(3*sizeof(char**));
    
    if(funkcja(t1, 3, 3, t2, 4, 3)&funkcja(t2, 4, 3, t1, 3, 3) printf("%d", 1);
    else ("%d", 0);
    return 0;

}

int funkcja( char** t1, int t1a, int t1b, char** t2, int t2a, int t2b){
    int i, j;
    for(i=0; i<t1a; i++) for(j=0; j<t1b; j++){
        if (!search(t2, t2a, t2b, t1[i][j])) return 0;
    }
    return 1;
}

       int search(char** t2, int a, int b, int x){
           int i, j;
           for(i=0l i<a;i++) for(j)
       }
