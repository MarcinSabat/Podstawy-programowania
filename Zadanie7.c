//
//  Zadanie7.c
//  
//
//  Created by Student on 01.12.2017.
//
//

#include <stdio.h>
#include <stdlib.h>

void funk (double t1[3][3], double t2[3][3], double t3[3][3], int n, int m)
{
    int i, j, k;
    for(i=0; i<n; i++){
        
        for(j=0;j<m;j++){
            t3[i][j]=0;
            
            for(k=0; k<m;k++){
                
                t3[i][j]+=t1[i][k]*t2[k][j];
                
            }
        }
    }
}

int main(){
    double t1[3][3]={ {0,2,2}, {1,2,3}, {2,1,0} };
    double t2[3][3]={ {2,1,0}, {-1,3,2}, {5,0,1} };
    double t3[3][3];
    funk (t1, t2, t3, 3, 3);
    int j,i;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++)
        {
            printf("%lf ", t3[i][j]);
        }
        printf("\n");
    }
}
