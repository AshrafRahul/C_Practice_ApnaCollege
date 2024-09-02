#include<stdio.h>
#include<string.h>

int countLength(char a[]);

int main(){
    char name[100];
    fgets(name, 100, stdin);
    printf("Length is: %d\n", countLength(name));

    return 0;
}

int countLength(char a[]){
    int count=0;
    for(int i=0; a[i]!='\0'; i++){
        count++;
    }
    return count-1;
}