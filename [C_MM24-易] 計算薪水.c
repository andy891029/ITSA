#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    double salarly,total_hours,ans;

    while(scanf("%lf %lf",&total_hours,&salarly) != EOF)
    {
        if(total_hours <= 60)
        {
            printf("%.1lf\n",total_hours*salarly);
        }
        else if(total_hours > 60 && total_hours <= 120)
        {
            ans = (total_hours-60)*1.33*salarly + 60*salarly;
            printf("%.1lf\n",ans);
        }
        else
        {
            ans = (total_hours-120)*1.66*salarly + 60*1.33*salarly +60*salarly;
            printf("%.1lf\n",ans);
        }
    }

    return 0;
}
