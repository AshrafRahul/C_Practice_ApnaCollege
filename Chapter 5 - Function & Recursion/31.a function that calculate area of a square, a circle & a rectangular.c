#include<stdio.h>
#include<math.h>

float squareArea(float side);
float circleArea(float rad);
float rectangularArea(float a, float b);

int main(){
    float side=8.54;
    float rad=2.11;
    float a=5.0, b=10.0;

    printf("Area of square is: %.2f\n", squareArea(side));
    printf("Area of circle is: %.2f\n", circleArea(rad));
    printf("Area of rectangular is: %.2f\n", rectangularArea(a,b));

    return 0;
}

float squareArea(float side){
    return side*side;
}

float circleArea(float rad){
    return 3.14*rad*rad;
}

float rectangularArea(float a, float b){
    return a*b;
}
