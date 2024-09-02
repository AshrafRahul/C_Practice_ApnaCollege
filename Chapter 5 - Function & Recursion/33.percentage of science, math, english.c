#include<stdio.h>

float percentage(float sci, float math, float eng);

int main(){
    printf("Percentage is: %.2f\n", percentage(98,88,89));

    return 0;
}

float percentage(float sci, float math, float eng){
    return ((sci+math+eng)/3);

}
