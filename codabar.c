#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void){
  int u[16], i, suma = 0, maj4 = 0, r, correcte;
  for(i = 0; i < 16; i++){
    scanf("%1d", &u[i]);
  }
  printf("\ncodi\t\t\t correcte\t correccio\n");
  while(u[0] != 0){
    suma = 0;
    maj4 = 0;
    for(i = 0; i < 16; i += 2){
      suma += 2 * u[i] + u[i + 1];
      if(u[i] > 4){
        maj4++;
      }
    }
    suma += maj4;
    r = suma % 10;

    for(i = 0; i < 16; i++){
      printf("%d", u[i]);
    }
    printf("\t");
  
    if(r == 0){
      correcte = 0;
    }
    else{
      correcte = 10 - r;
    }
    
    if(u[15] == correcte){
      printf("Si\n ");
    }
    else{
      printf("No\t ");
      for(i = 0; i < 15; i++){
        printf("%d", u[i]);
      }
      printf("%d\n", correcte);
    }

    for(i = 0; i < 16; i++){
      scanf("%1d", &u[i]);
    }
  }
  return 0;
}