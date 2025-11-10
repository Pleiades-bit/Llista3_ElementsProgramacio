#include <stdio.h>
#include <stdlib.h>

#define DIM 20

int main(void){
    int n, i;
    double u[DIM], v[DIM], w[DIM], z[DIM], lambda;
    printf("n: \n");
    scanf("%d", &n);
    printf("u: \n");
    for(i = 0; i < n; i++){
        scanf("%lf", &u[i]);
    }
    printf("v: \n");
    for(i = 0; i < n; i++){
        scanf("%lf", &v[i]);
    }
    printf("lambda: \n");
    scanf("%lf", &lambda);

    for(i = 0; i < n; i++){
        w[i] = u[i] + v[i];
        z[i] = lambda * u[i];
        printf("w[%d]=%lf\tz[%d]=%lf", i, w[i], i, z[i]);
    }
    return 0;
}