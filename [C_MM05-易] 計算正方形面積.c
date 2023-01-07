#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
    double a,answer;
    while(scanf("%lf",&a) != EOF)
    {
        if(a*a - (int)a*a <0.05)
            printf("%.1lf\n",a*a);
        else
            printf("%.1lf\n",a*a+0.05);
    }



    return 0;
}
