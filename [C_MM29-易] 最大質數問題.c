#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int prime(int num)
{
    int ans = 1;
    if(num == 1) return 0;
        else if(num == 2) return 1;
        else
        {
            for(int i = 3;i<num;i++)
            {
                if(num%i ==0)
                {
                    ans = i;
                }
            }
            if(ans == 1)
            return 1;
            else
            return 0;
        }

}

int main()
{
    int num,prim,ans = 2;

    while(scanf("%d",&num) != EOF)
    {
        for(int i = 2;i<num;i++)
        {
            if(prime(i)) ans = i;
        }
        printf("%d\n",ans);
    }

    return 0;
}
