//
//  Zadanie3.c
//
//
//  Created by Student on 15.12.2017.
//
//

#include <stdio.h>
#include <stdlib.h>

int liczba(char *napis){
    int i;
    int ilosc=0;
    for(i=0; napis[i]!='\0'; i++){
        if((napis[i]==' ') && i>0 && (napis[i-1]!=' '))
            ilosc++;
    }
    if(napis[i-1]!=' ')
        ilosc++;
    return ilosc;
}


int main(){
    
    char napis[]="  tata lubi   X5";
    printf("%d\n", liczba(napis));
    return 0;
}
