/*
 Challenge project in C
 
 * Had to find the perimeter and area of a rectangle. 
 */
#include <stdio.h>

int main() 
{
    double height = 10.5, width = 10.5;
    double perimeter = 2.0 * (height + width);
    double area = (height * width);
    
    printf("Height: %.2f\nWidth: %.2f\nPerimeter: %.2f\n", height, width, perimeter);
    printf("Area of Rectangle: %.2f", area);
    
    return 0;
}
