#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define DIM 100

int main(void){
  int n, i; 
  double v[DIM], norm_1 = 0.0, norm_2 = 0.0, norm_inf, max = 0;

  printf("Introduïu la dimensió: \n");
  scanf(" %d", &n);
  i = 0;
  printf("Introduïu les components del vector: \n");
  while(i < n){
    scanf("%lf", &v[i]);
    i++;
  }
  for(i = 0; i < n; i++){
    norm_1 += fabs(v[i]);
    norm_2 += v[i] * v[i];
    if(fabs(v[i]) > max){
      max = fabs(v[i]);
    }
  }
  norm_2 = sqrt(norm_2);
  norm_inf = max;
  printf("Norma 1 = %g\n", norm_1);
  printf("Norma 2 = %g\n", norm_2);
  printf("Norma inf = %g\n", norm_inf);
  return 0;
}