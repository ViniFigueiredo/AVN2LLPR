#include <stdio.h>
#define LIN 3
#define COL 5

int main(){
    int mat[LIN][COL], i, j, num;
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            scanf("%i", &mat[i][j]);
        }
    }

       for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            if(mat[i][j]>=15 && mat[i][j]<=20){
                num++;
            }
        }
    }
    printf("A quantidade de elementos entre 15 e 20 é: %d\n", num);
}