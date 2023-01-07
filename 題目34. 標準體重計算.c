//»ùµAî}Ä¿Œ£…^

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float high,human;

    while(scanf("%f %f",&high,&human) != EOF)
    {
        if(human == 1) printf("%.1f\n",(high-80)*0.7);

        else printf("%.1f\n",(high-70)*0.6);
    }

    return 0;
}

