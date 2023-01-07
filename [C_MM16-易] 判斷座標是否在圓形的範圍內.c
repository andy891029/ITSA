#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define pi = 3.1415926

int main()
{
    float x,y;

    while(scanf("%f %f",&x,&y) != EOF)
    {
        if(x<=100 && y<=100 && x*x+y*y <= 10000)
        {
            printf("inside\n");
        }
        else
        {
            printf("outside\n");
        }
    }

    return 0;
}
