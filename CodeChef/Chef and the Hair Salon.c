#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", & t);

    while (t != 0)
    {
        int N, M;
        scanf("%d%d", & N, & M);
        printf("%d\n",N * M);
        t--;
    }
}
