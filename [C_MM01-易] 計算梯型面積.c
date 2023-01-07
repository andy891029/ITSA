#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
    float number_high,number_low,high,answer;
    while(scanf("%f %f %f",&number_high,&number_low,&high) != EOF)
    {
        answer = (number_high+number_low)*high/2;
        printf("Trapezoid area:%.1f\n",answer);
    }
    return 0;
}

