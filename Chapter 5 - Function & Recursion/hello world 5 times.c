#include<stdio.h>

void printHW(int count);

int main(){
    printHW(5);

    return 0;
}

//recursive function
void printHW(int count){
    if(count==0){
        return ;
    }
    printf("Hello world!\n");
    printHW(count-1);
}
