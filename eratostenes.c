#include <stdio.h>
#include <stdlib.h>

#define DIM 50

int main(void){
    int n, i, j, llista[DIM];
    printf("n = \n");
    scanf("%d",&n);
    while(n < 0 || n > DIM){
        printf("Dimensió incorrecte");
        scanf("%d", &n);
    }
    for(i = 0; i < n; i++){
        llista[i] = i;
    }
    for(i = 2; i < n; i++){
        if(llista[i] == 0) continue;
        for(j = i + 1; j < n; j++){
            if(j % i == 0) llista[j] = 0;
        }
    }
    for(i = 0; i < n; i++){
        if(llista[i] != 0){
            printf("%d ", llista[i]);
        } 
    }
    printf("\n");
    return 0;
}