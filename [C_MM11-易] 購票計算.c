
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int NT;
    while(scanf("%d",&NT) != EOF)
    {
        printf("NT10=%d\n",NT/10);
        printf("NT5=%d\n",NT%10/5);
        printf("NT1=%d\n",NT%10%5/1);
    }
    return 0;
}
