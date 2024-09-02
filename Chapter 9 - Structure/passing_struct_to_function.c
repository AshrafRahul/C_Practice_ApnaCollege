#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

void printInfo(struct student s1);

int main(){
    struct student s1 = {1664, 9.2, "Ashraful"};
    printInfo(s1);

    s1.roll = 1660;
    printf("student.roll: %d\n", s1.roll);
}

void printInfo(struct student s1){
    printf("Student information: \n");
    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("CGPA: %.2f\n", s1.cgpa);

    s1.roll = 1660;
}