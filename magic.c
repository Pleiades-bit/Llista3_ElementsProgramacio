#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void){
  int n, **A, i, j, num = 1;
  printf("n = ");
  scanf("%d", &n);
  while(n % 2 != 1){
    printf("\nn ha de ser senar\n");
    printf("Torni a introduïr n: ");
    scanf("%d", &n);
  }
  
  A = (int**)malloc(n * sizeof(int*));
  for(i = 0; i < n; i++){
    A[i] = (int*)malloc(n * sizeof(int));
  }

  i = 0;
  j = n / 2;

  A[i][j] = 1;
  for(num = 2; num <= n * n; num++){
    i = (i - 1 + n) % n;
    j = (j + 1) % n;
    if(A[i][j] >= 1){
      i = (i + 2) % n;
      j = (j - 1 + n) % n;
    }
    A[i][j] = num;
  }

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }


  return 0;
}