#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
    float number_low,high,answer;
    while(scanf("%f %f",&number_low,&high) != EOF)
    {
        answer = (number_low)*high/2;
        printf("%.1f\n",answer);
    }
    return 0;
}
