#include<stdio.h>

float convertTemp(float celsius);

int main(){
    float fah = convertTemp(37);
    printf("Fah: %f\n", fah);

    return 0;
}

float convertTemp(float celsius){
    float fah = celsius * (9.00/5.00) + 32;
    return fah;
}
