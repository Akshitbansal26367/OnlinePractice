#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", & t);

    while (t-- != 0)
    {
        int n, count = 0;
        scanf("%d", & n);

        for (int i = 0; n != 50; i++)
        {
            if (n < 50)
            {
                n = n + 2;
                count++;
            }

            else
            {
                n = n - 3;
                count++;
            }
        }

        printf("%d\n", count);
    }
}
