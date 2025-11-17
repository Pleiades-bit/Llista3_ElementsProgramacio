#include <stdio.h>
#include <stdlib.h>

#define DIM 30

int main(void){
  int n, u[DIM], i, j, aux_1, aux_2, nou_num;

  printf("Introduïu la dimensió\n");
  scanf(" %d", &n);
  while(n > 30 || n < 0){
    printf("Dimensió incorrecta, 0 < n <= 30\n");
    printf("Introduïu la dimensió\n");
    scanf("%d", &n);
  }

  u[0] = rand() % 10 - 5;
  for(i = 1; i < n / 2; i++){
    u[i] = u[i - 1] + rand() % 10;
  }
  
  while(i < n){
    printf("vector = ");
    for(j = 0; j < i; j++){
      printf("%d, ", u[j]);
    }
    printf("\nNou número: \n");
    scanf(" %d", &nou_num);

    j = 0;
    while(nou_num > u[j] && j < i){
      j++;
    }
    aux_1 = u[j];
    u[j] = nou_num;
    for(j = j + 1; j <= i; j++){
      aux_2 = u[j];
      u[j] = aux_1;
      aux_1 = aux_2;
    }
    i++;
  }
  printf("vector = ");
  for(j = 0; j < n; j++){
      printf("%d, ", u[j]);
  }
  printf("\n");
  return 0;
}