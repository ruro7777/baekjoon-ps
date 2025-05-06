#include <stdio.h>
#include <algorithm>

using namespace std;

int visit[100][100];
int arr[100][100];

int N;


int dfs(int n, int m)
{
  if (visit[n][m]) return 0;
  visit[n][m] = 1;
  if (arr[n][m] == 0) return 0;
  if (n==N-1 && m==N-1) return 1;
  if (n>=N || m>=N) return 0;

  return max(dfs(n+arr[n][m], m), dfs(n, m+arr[n][m]));
}

int main(void)
{
    scanf("%d", &N);
    for (int i = 0; i<N; i++)
    {
        for (int j = 0; j<N; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    if (dfs(0,0)) 
        printf("HaruHaru");
    else
        printf("Hing");
}