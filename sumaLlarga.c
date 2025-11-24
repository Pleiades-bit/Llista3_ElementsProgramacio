#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void){
  int u1[25], u2[25], res[26], i, emporta = 0;

  for(i = 0; i < 25; i++){
    scanf("%1d", &u1[i]);
  }
  
  for(i = 0; i < 25; i++){
    scanf("%1d", &u2[i]);
  }

  for(i = 0; i < 25; i++){
    res[i] = (u1[i] + u2[i]) % 10;
    if(emporta == 1) res[i]++;
    if(u1[i] + u2[i] >= 10){
      emporta = 1;
    }
    else{
      emporta = 0;
    }
  }
  if(emporta == 1){
    res[25] = 1;
  }
  else{
    res[25] = 0;
  }

  for(i = 25; i >= 0; i--){
    printf("%d", res[i]);
  }
  printf("\n");
  return 0;
}
