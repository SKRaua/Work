#include <bits/stdc++.h>
using namespace std;

// 思路1：从上到下，上一层最优解无法直接决定最优解决，考虑计算到达每行每个点的最大值，从而往后推出下一行的最优，比暴力枚举好点，不过没有好很多，应当有更好解法。

int r, a[1010][1010], f[1010][1010];

int main()
{
    cin >> r;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cin >> a[i][j];
        }
    }

    f[1][1] = a[1][1];

    for (int i = 2; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1)
            {
                f[i][j] = f[i - 1][j] + a[i][j];
            }
            else if (j == i)
            {
                f[i][j] = f[i - 1][j - 1] + a[i][j];
            }
            else
            {
                f[i][j] = max(f[i - 1][j - 1], f[i - 1][j]) + a[i][j];
            }
        }
    }

    int *max = max_element(f[r], f[r] + r + 1);
    cout << *max << endl;

    return 0;
}
