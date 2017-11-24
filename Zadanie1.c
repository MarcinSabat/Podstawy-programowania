//
//  Zadanie1.c
//  
//
//  Created by Student on 24.11.2017.
//
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    char *string;
    
    fgets(string, 50, stdin);
    fputs(string, stdout);
    
    double result = atof(string);
    printf("%lf\n", result);
    
    int res = atoi(string);
    printf("%d\n", res);
    
    long int res2 = atol(string);
    printf("%ld\n", res2);
    
    long long int res3 = atoll(string);
    printf("%lld\n", res3);
    
    float res4 = strtof(string, NULL);
    printf("%f\n", res4);
    
    return 0;
}
