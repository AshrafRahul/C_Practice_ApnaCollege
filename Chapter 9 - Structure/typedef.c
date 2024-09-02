#include<stdio.h>
#include<string.h>

typedef struct SoftwareEngineeringStudent{
    int roll;
    float cgpa;
    char name[100];
}swe;

int main(){
    swe s1;
    s1.roll = 1664;
    s1.cgpa = 9.2;
    strcpy(s1.name, "Ashraful");

    printf("Name: %s\n", s1.name);
    printf("Student roll: %d\n", s1.roll);
    printf("Student CGPA: %.2f\n", s1.cgpa);


}
