/*
write a program to allocate memory to store 5 prices
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    ptr = (float*) malloc(5 * sizeof(float));

    ptr[0] = 1.58;
    ptr[1] = 3.47;
    ptr[2] = 5.98;
    ptr[3] = 7.64;
    ptr[4] = 9.87;
    
    for(int i=0; i<5; i++){
        printf("Product %d: %.2f\n", i+1, ptr[i]);
    }
}