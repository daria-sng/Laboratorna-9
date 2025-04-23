#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define N 5

void z (int x[N], int y[N], int z_array[N]);

int main (){
    system ("chcp 65001");
    int x[N], y[N], z_array[N], i;
    puts("Введіть 5 цілих значень для масивів x[N], y[N]: ");
    
    for(i=0; i<N; i+=1){
    printf("x[ ] і y[ ]: "); 
    scanf("%d%d", &x[i], &y[i]);
}

    z(x, y, z_array);
    
    for(i=0; i<N; i+=1){
    printf("Результат: %d\n", z_array[i]); 
    }
    
    return 0;
}

void z (int x[N], int y[N], int z_array[N]){
    for(int i = 0; i<N; i+=1) {
        if(x[i] <= y[i]) {
            z_array[i] = x[i]*x[i] + y[i]*y[i];
        } else {
            z_array[i] = x[i] - y[i]*y[i];
        }
    }
}