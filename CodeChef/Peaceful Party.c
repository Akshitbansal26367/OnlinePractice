#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", & t);

    while (t != 0)
    {
        int a, b, c;
        scanf("%d%d%d", & a, & b, & c);

        if ((a + c) >= b)
            printf("%d\n", a + c);

        else
            printf("%d\n", b);

        t--;
    }
}
