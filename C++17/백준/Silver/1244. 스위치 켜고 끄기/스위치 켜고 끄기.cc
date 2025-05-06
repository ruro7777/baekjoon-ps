#include <stdio.h>
#include <stdbool.h>

int flip(int n)
{
    if (n == 0) return 1;
    else return 0;
}

int main(void)
{
    int s, n;
    scanf("%d", &s);
    int switches[s];
    for (int i = 0; i<s; i++) {
        scanf("%d", &switches[i]);
    }
    scanf("%d", &n);
    for (int i = 1; i<=n; i++) {
        int gender, num;
        scanf("%d %d", &gender, &num);
        if (gender == 1)
        {
            for (int i = 1; i<=s; i++) {
                if (i % num == 0) switches[i-1] = flip(switches[i-1]);
            }
        }
        else if (gender == 2)
        {
            switches[num-1] = flip(switches[num-1]);
            int m = 1;
            while (num-m != 0 && num+m-1 != s) {
                if (switches[num+m-1] == switches[num-m-1])
                {
                    switches[num + m - 1] = flip(switches[num+m-1]);
                    switches[num-m-1] = flip(switches[num-m-1]);
                    m++;
                }
                else break;
            }
        }
    }
    for (int i = 0; i<s; i++) {
        if ((i % 20 == 0) && (i!=0)) printf("\n");
        printf("%d ", switches[i]);
    }
}