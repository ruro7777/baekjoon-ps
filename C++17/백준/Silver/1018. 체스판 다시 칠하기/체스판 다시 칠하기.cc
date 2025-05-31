#include <stdio.h>

int min(int a, int b) {
    return a < b ? a : b;
}

int count_changes(char board[50][50], int start_row, int start_col, char pattern[8][8]) {
    int count = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (board[start_row + i][start_col + j] != pattern[i][j]) {
                count++;
            }
        }
    }
    return count;
}

int main() 
{
    int N, M;
    scanf("%d %d", &N, &M);

    char board[50][50];
    for (int i = 0; i < N; i++) 
    {
        scanf("%s", board[i]);
    }

    char pattern1[8][8] = {
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}
    };

    char pattern2[8][8] = {
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}
    };

    int min_changes = 64;  // 최악의 경우 64개의 정사각형을 다시 칠해야 함
    for (int i = 0; i <= N - 8; i++) 
    {
        for (int j = 0; j <= M - 8; j++)
            {
            int changes1 = count_changes(board, i, j, pattern1);
            int changes2 = count_changes(board, i, j, pattern2);
            min_changes = min(min_changes, min(changes1, changes2));
        }
    }

    printf("%d\n", min_changes);
}
