#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1 = {1664, 9.2, "Ashraful"};
    struct student *ptr = &s1;

    printf("Name: %s\n", (*ptr).name);
    printf("Roll: %d\n", (*ptr).roll);
    printf("CGPA: %.2f\n", (*ptr).cgpa);
}