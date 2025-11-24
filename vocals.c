#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void){
  char tira[100], vocal[11] = "aeiouAEIOU", temp1, temp2;
  int i, j, voc[5];

  for(i = 0; i < 100; i++){
    scanf("%c", &tira[i]);
  }
  for(i = 0; i < 5; i++){
    voc[i] = 0;
  }
  for(i = 0; i < 100; i++){
    temp1 = tira[i];
    for(j = 0; j < 10; j++){
      temp2 = vocal[j];
      if(temp1 == temp2){
        voc[j % 5]++;
      }
    }
  }

  for(i = 0; i < 5; i++){
    if(voc[i] > 0){
      printf("La vocal %c apareix %d vegades\n", vocal[i], voc[i]);
    }
  }
  return 0;
}
