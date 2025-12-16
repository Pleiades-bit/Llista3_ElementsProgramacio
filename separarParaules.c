#include <stdint.h>
#include <stdio.h>
#include <string.h>

int main(void){
  char s[101];
  int i = 0;

  while(scanf("%1c", &s[i]) != EOF && s[i] != '\n' && i < 100){
    if(s[i] == ' '){
      printf("\n");
      i++;
    }
    else{
      printf("%c", s[i]);
      i++;
    }
  }
  printf("\n");
  return 0;
}