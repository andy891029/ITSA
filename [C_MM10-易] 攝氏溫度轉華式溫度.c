#include <stdlib.h>
#include <stdio.h>

int main()
{
    double F,C;
    while(scanf("%lf",&F) != EOF)
    {
        C = F*9/5 +32;

        if(C - (int)C <0.05)
            printf("%.1lf\n",C);
        else
            printf("%.1lf\n",C+0.05);
    }

    return 0;
}

