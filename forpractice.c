#include <stdio.h>
int main()
{
    float m1 = 40; //maths marks
    float m2 = 20; //physics marks
    float m3 = 10; //chemistry marks
    float m4 = 35; //english marks

    float percent = (m1 + m2 + m3 + m4)/160 *100;
    printf("the percentage of four subject whose marks are out of 40 is is: %f", percent);
    return 0;
}

