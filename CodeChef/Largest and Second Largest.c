#include <stdio.h>

int main()
{
    int t;
    scanf("%d", & t);

    while (t-- != 0)
    {
        int n, i, j;
        scanf("%d", & n);
        int a[n];

        for (i = 0; i < n; i++)
            scanf("%d", & a[i]);

        int largest = -1, secondLargest = -1;

        for (i = 0; i < n; i++)
        {
            if (largest < a[i])
            {
                secondLargest = largest;
                largest = a[i];
            }

            else if (a[i] > secondLargest && a[i] != largest)
                secondLargest = a[i];
        }

        printf("%d\n", (largest + secondLargest));
    }
}
