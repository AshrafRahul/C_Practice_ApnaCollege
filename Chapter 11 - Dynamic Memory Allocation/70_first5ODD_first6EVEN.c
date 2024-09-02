/*
allocate memory to store first 5 odd number,
then reallocate it to store 6 even number
*/

 #include<stdio.h>
 #include<stdlib.h>

 int main(){
    int *ptr;
    ptr = (int*) calloc(5, sizeof(int));

    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;
    
    printf("Odd numbers are: ");
    for(int i=0; i<5; i++){
        printf("%d  ", ptr[i]);
    }

    ptr = (int*) calloc(6, sizeof(int));

    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr[3] = 8;
    ptr[4] = 10;
    ptr[5] = 12;
    
    printf("\nEven numbers are: ");
    for(int i=0; i<6; i++){
        printf("%d  ", ptr[i]);
    }

 }