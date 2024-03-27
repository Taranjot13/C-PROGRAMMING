// C Program Calculate area and circumference of a circle using functions

#include<stdio.h>
const float PI = 3.14;
float area(float r);
float circumference(float r);
void main() {
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Area of circle: %f\n", area(r));
    printf("Circumference of circle: %f\n", circumference(r));
}
float area(float r) {
  return PI * r * r;
}
float circumference(float r) {
  return 2 * PI * r;
}
