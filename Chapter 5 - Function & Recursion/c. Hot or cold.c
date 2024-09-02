#include<stdio.h>

void print_Temp(float temp);

int main(){
    float temp;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &temp);

    print_Temp(temp);

    return 0;
}

void print_Temp(float temp){
    if(temp>25){
        printf("Hot\n");
    }
    if(temp<=25){
        printf("Cold\n");
    }
}
