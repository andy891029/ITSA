#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
    int number1,number2;
    while(scanf("%d %d",&number1,&number2) != EOF)
    {
        if(number1 > 0)
        {
            printf("%d+%d=%d\n",number1,number2,number1+number2);
            printf("%d*%d=%d\n",number1,number2,number1*number2);
            printf("%d-%d=%d\n",number1,number2,number1-number2);
            printf("%d/%d=%d...%d\n",number1,number2,number1/number2,abs(number1%number2));
        }
        else
        {
            if(number1%number2 == 0)
            {
                printf("%d+%d=%d\n",number1,number2,number1+number2);
                printf("%d*%d=%d\n",number1,number2,number1*number2);
                printf("%d-%d=%d\n",number1,number2,number1-number2);
                printf("%d/%d=%d...%d\n",number1,number2,number1/number2,abs(number1%number2));
            }
            else
            {
                printf("%d+%d=%d\n",number1,number2,number1+number2);
                printf("%d*%d=%d\n",number1,number2,number1*number2);
                printf("%d-%d=%d\n",number1,number2,number1-number2);
                printf("%d/%d=%d...%d\n",number1,number2,number1/number2-1,abs(number1%number2));
            }
        }

    }
    return 0;
}
