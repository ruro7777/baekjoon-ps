#include <stdio.h>

int adj[101][101];
int visit[101];
int size = 100;

void dfs(int n)
{
    if (visit[n]) return;
    visit[n] = 1;
//    printf("%d ", n);

    for (int i = 0; i <= size; i++)
    {
        if (adj[n][i])
        {
            dfs(i);
        }
    }
}

int main(void)
{
    int c, n, cnt = 0;
    scanf("%d %d", &c, &n);
    for (int i = 0; i<n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        adj[a][b] = 1;
        adj[b][a] = 1;
    }

    dfs(1);
    for (int i = 0; i<101; i++)
        {
            if (visit[i]) cnt ++;
        }
    printf("%d", cnt-1);
}