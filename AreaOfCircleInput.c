#include <stdio.h>
int main()
{
    float radius;
    printf("Enter Radius : ");
    scanf("%f",&radius);
    float pi = 3.1415;
    float Area= pi * radius * radius;
    printf("The Area Of Circle Is: %f", Area);
    return 0;
}

