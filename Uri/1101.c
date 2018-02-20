#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x, y, min, max, st;
    while(1)
    {
        scanf("%d %d", &x, &y);
        if(x <= 0 || y <= 0)
        {
            break;
        }
        else
        {
            if(x > y)
            {
                max = x;
                min = y;
            }
            else
            {
                max = y;
                min = x;
            }
            st = 0;
            while(min <= max)
            {
                printf("%d ", min);
                st += min;
                min++;
            }
            printf("Sum=%d\n", st);
        }
    }
    return 0;
}
