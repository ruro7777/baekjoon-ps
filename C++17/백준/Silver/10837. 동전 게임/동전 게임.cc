#include <stdio.h>

int main(void)
{
    int k, c;
    scanf("%d %d", &k, &c);
    for (int i = 0; i<c; i++)
    {
        int m, n;
        scanf("%d %d", &m, &n);

        if (m == n) printf("1\n");
        else if (m < n)
        {
            int round_left = k-n;
            if (m+round_left >= n-1) printf("1\n");
            else printf("0\n");
        }
        else if (m > n)
        {
            int roundleft = k-m+1;
            if (m-1 <= n+roundleft) printf("1\n");
            else printf("0\n");
        }
    }
}