#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define DIM 20
int main(void){
  int n1, n2, i, suma_resta = 0, max;
  double poli_1[DIM], poli_2[DIM], poli_res[DIM];

  scanf(" %d", &n1);
  for(i = 0; i <= n1; i++){
    scanf(" %lf", &poli_1[i]);
  }
  scanf(" %d", &n2);
  for(i = 0; i <= n2; i++){
    scanf(" %lf", &poli_2[i]);
  }
  max = n1;
  if(n2 > max) max = n2;
  printf("Indiqui si vol sumar (0) o restar (1)\n");
  scanf(" %d", &suma_resta);
  if(suma_resta == 0){
    for(i = 0; i <= max; i++){
      poli_res[i] = (poli_1[i] + poli_2[i]);
    }
  }
  else if(suma_resta == 1){
      for(i = 0; i <= max; i++){
        poli_res[i] = (poli_1[i] - poli_2[i]);
      }
  }
  else{
    printf("Operació no vàlida");
    return 1;
  }
  printf("p(x)\t");
  for (i = 0; i <= n1; i++){
    printf("%5.4e ", poli_1[i]);
    if(i != 0){
      printf("x");
      if(i != 1){
        printf("^%d",i);
      }
      printf(" ");
    }
  }
  printf("\nq(x)\t");
  for (i = 0; i <= n2; i++){
    printf("%5.4e ", poli_2[i]);
    if(i != 0){
      printf("x");
      if(i != 1){
        printf("^%d",i);
      }
      printf(" ");
    }
  }
  printf("\nsuma:\t");
  for (i = 0; i <= max; i++){
    if(poli_res[i] == 0){
      printf("            ");
    }
    else{
      printf("%5.4e ", poli_res[i]);
      if(i != 0){
        printf("x");
        if(i != 1){
          printf("^%d",i);
        }
        printf(" ");
      }
    }
  }
}