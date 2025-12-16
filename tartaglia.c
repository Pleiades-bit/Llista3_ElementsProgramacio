#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){
  int n, i, j, *v, *cpy;
  scanf(" %d", &n);
  
  for(j = 1; j < n; j++){
    for(i = 1; i <= j; i++){
      v[i] = v[i] + v[i - 1];
    }
  }
}