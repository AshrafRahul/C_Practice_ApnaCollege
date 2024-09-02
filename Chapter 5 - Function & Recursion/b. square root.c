#include<stdio.h>
#include<math.h>

float sqrt_root(float n);

int main(){
    float n;
    scanf("%f", &n);

    printf("Root value is: %.2f\n", sqrt_root(n));

    return 0;
}

float sqrt_root(float n){
    return sqrt(n);
}
