#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    long Factorial,ans = 1;

    while(scanf("%ld",&Factorial) != EOF)
    {
        if(Factorial > 0 && Factorial <20)
        {
            for(int i = 1;i<=Factorial;i++)
            {
                ans *= i;
            }
            printf("%ld\n",ans);
        }
        ans = 1;
    }

    return 0;
}
