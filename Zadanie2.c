//
//  Zadanie2.c
//  
//
//  Created by Student on 10.11.2017.
//
//

#include <stdio.h>
#include <string.h>
#include <stdbool.h>



int dlugosc_tekstu(char napis[]){
    int i=0;
    for(i=0; napis[i]; i++);
    return i-1;
}

bool czy(char napis1[], char napis2[]){
    int a=dlugosc_tekstu(napis1);
    int i, n;
    for(i=0, n=a-1; i<a; i++, n--){
        if (napis1[i]!=napis2[n]){
            return false;
        }
    }
    return true;
}


int main(){
    char tab[15], tab2[15];
    fgets(tab, 15, stdin);
    fgets(tab2, 15, stdin);
    printf(czy(tab, tab2)?"tak" : "nie"	);
}
