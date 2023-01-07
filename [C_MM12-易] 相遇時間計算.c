#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int distance;
    double difference,time;

    while(scanf("%d",&distance) != EOF)
    {
        difference = (1-2.54*0.3)*100;
        distance *= 100;
        time = distance/difference;

        if(time-(int)time < 0.00001)
        {
            printf("%.0lf\n",ceil(time));
        }
        else
        {
            printf("%.0lf\n",ceil(time));
        }

    }
    return 0;
}
