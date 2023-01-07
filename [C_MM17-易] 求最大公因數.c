#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int x,y,i = 1,ans;

    while(scanf("%d %d",&x,&y) != EOF)
    {
        if(x>=y)
        {
            for(i = 1;i<=y;i++)
            {
                if(x%i == 0 && y%i==0)
                {
                    ans = i;
                }
            }
        }
        else
        {
            for(i=1;i<=x;i++)
            {
                if(x%i == 0 && y%i==0)
                {
                    ans = i;
                }
            }
        }
        printf("%d\n",ans);

    }

    return 0;
}
