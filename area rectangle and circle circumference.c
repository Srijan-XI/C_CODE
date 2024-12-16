#include <stdio.h>

#define PI 3.14159

float calculateRectangleArea(float length, float width) {
    return length * width;
}

float calculateRectanglePerimeter(float length, float width) {
    return 2 * (length + width);
}

float calculateCircleArea(float radius) {
    return PI * radius * radius;
}

float calculateCircleCircumference(float radius) {
    return 2 * PI * radius;
}

int main() {
    float length, width, radius;
    printf("Enter the length and width of the rectangle: ");
    scanf("%f %f", &length, &width);
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    float rectangleArea = calculateRectangleArea(length, width);
    float rectanglePerimeter = calculateRectanglePerimeter(length, width);
    float circleArea = calculateCircleArea(radius);
    float circleCircumference = calculateCircleCircumference(radius);

    printf("\nRectangle\n");
    printf("Area: %.2f\n", rectangleArea);
    printf("Perimeter: %.2f\n", rectanglePerimeter);

    printf("\nCircle\n");
    printf("Area: %.2f\n", circleArea);
    printf("Circumference: %.2f\n", circleCircumference);

    return 0;
}
