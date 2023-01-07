#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int num,prime,ans = 1;

    while(scanf("%d",&num) != EOF)
    {
        if(num == 1) printf("No\n");
        else if(num == 2) printf("YES\n");
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
            printf("YES\n");
            else
            printf("NO\n");
        }
        ans = 1;


    }

    return 0;
}
