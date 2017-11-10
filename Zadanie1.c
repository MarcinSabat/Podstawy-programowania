//
//  Zadanie1.c
//  
//
//  Created by Student on 10.11.2017.
//
//

#include <stdio.h>
#include <string.h>

int main(){
    char napis[15];
    gets(napis);
    puts(napis);
    fgets(napis, 15, stdin);
    fputs(napis, stdout);
    scanf("%s", napis);
    printf("%s", napis);
}
