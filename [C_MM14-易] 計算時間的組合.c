#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int time;

    while(scanf("%d",&time) != EOF)
    {
        printf("%d days\n",time/86400);
        printf("%d hours\n",(time%86400)/3600);
        printf("%d minutes\n",time%3600/60);
        printf("%d seconds\n",time%60);
    }
    return 0;
}
