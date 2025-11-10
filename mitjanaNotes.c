#include <stdio.h>
#include <stdlib.h>

#define DIM 20

int main(void){
    int n, i, count = 0;
    double notes[DIM], suma = 0, mitja;
    printf("n: \n");
    scanf("%d", &n);
    printf("Sequencia de notes: \n");
    for(i = 0; i < n; i++){
        scanf(" %lf", &notes[i]);
        suma += notes[i];
    }
    mitja = suma / n;
    for(i = 0; i < n; i++){
        if(notes[i] < mitja){
            count++;
        }
    }
    printf("Hi ha %d notes per sota de la mitja (%g) \n", count, mitja);
    return 0;
}