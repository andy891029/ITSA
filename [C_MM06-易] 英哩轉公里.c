//mile to km
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
    int mile;
    double km;
    while(scanf("%d",&mile) != EOF)
    {
        if(mile*1.6 - (int)mile*1.6 <0.05)
            printf("%.1lf\n",mile*1.6);
        else
            printf("%.1lf\n",mile*1.6+0.05);
    }
    return 0;
}

