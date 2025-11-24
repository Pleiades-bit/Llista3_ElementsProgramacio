#include <stdio.h>
#include <stdlib.h>

#define DIM 100

int main(void){
    int n, i, j, valor, car_1, car_2, is_true = 1, seq_1[DIM], seq_2[DIM], trigger = 0;
    printf("n = \n");
    scanf("%d", &n);
    while(n > DIM){
        printf("Dimensió massa gran\n n = \n");
        scanf("%d", &n);
    }
    printf("Sequencia 1:\n");
    scanf("%d", &valor);
    i = 0;
    while(valor != 0 && i < n){    
        seq_1[i] = valor;
        i++;
        scanf("%d", &valor);
    }
    car_1 = i;
    

    printf("Sequencia 2:\n");
    scanf("%d", &valor);
    i = 0;
    while(valor != 0 && i < n){    
        seq_2[i] = valor;
        i++;
        scanf("%d", &valor);
    }
    car_2 = i;

    for(i = 0; i < car_1 && is_true == 1; i++){
        is_true = 0;
        for(j = 0; j < car_2; j++){
            if(seq_1[i] == seq_2[j]){
                is_true = 1;
            }
        }
        if(is_true == 0){
            printf("La sequencia 1 no està continguda en la sequencia 2\n");
            trigger = 1;
        }
    }

    for(i = 0; i < car_2 && is_true == 1; i++){
        is_true = 0;
        for(j = 0; j < car_1; j++){
            if(seq_2[i] == seq_1[j]){
                is_true = 1;
            }
        }
        if(is_true == 0){
            printf("La sequencia 2 no està continguda en la sequencia 1\n");
            trigger = 1;
        }
    }
    if(trigger == 0){
        printf("Les seqüències contenen els mateixos números");
    }
    return 0;
}