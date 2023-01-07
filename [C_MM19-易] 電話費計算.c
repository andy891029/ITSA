#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    double time,ans;

    while(scanf("%lf",&time) != EOF)
    {
        if(time<=800)
        {
            ans = time*0.9;
            printf("%.1f\n",ans);
        }
        else if(time > 800 && time < 1500)
        {
            ans = time*0.9*0.9;
            printf("%.1f\n",ans);
        }
        else
        {
            ans = time*0.9*0.79;
            printf("%.1f\n",ans);
        }
    }

    return 0;
}
