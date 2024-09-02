#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("NewTest.txt", "w");
    if(fptr==NULL){
        printf("file doesn't exist\n");
    }
    else{
        fclose(fptr);
    }


    return 0; 
}