#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;

//일직선으로 펴서 생각

int main(void)
{
    int a, b;
    int sum = 0;
    scanf("%d %d", &a, &b);

    int n;
    scanf("%d", &n);

    int store[n][2];

    for (int i = 0; i<n+1; i++)
    {
        int c, d;
        scanf("%d %d", &c, &d);
        store[i][0] = c;
        store[i][1] = d;
    }

  //  int me1, me2;
   // scanf("%d %d", &me1, &me2);

    //왼쪽 대각선이 0

    int len[n+1] = {};
    
    for (int i = 0; i<=n; i++)
    {
        if (store[i][0] == 1)
        {
            len[i] = (a+b)*2 - store[i][1];
        }
        else if (store[i][0] == 2)
        {
            len[i] = b+store[i][1];
        }
        else if (store[i][0] == 3)
        {
            len[i] = store[i][1];
        }
        else if (store[i][0] == 4)
        {
            len[i] = (a+b)*2 - (a + store[i][1]);
        }
    }

    for (int i = 0; i<n; i++)
    {
        sum += min(abs(len[n]-len[i]), (a+b)*2-abs(len[n]-len[i]));
    }
    printf("%d", sum);
}