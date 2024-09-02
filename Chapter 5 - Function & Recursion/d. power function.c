#include<stdio.h>
#include<math.h>

float calculate_power(float n, float exp);

int main(){
    float n, exp;
    printf("Enter number: ");
    scanf("%f", &n);
    printf("Enter exponent: ");
    scanf("%f", &exp);

    printf("\nThe result value is: %.2f\n", calculate_power(n,exp));

    return 0;
}

float calculate_power(float n, float exp){
    return pow(n,exp);
}
