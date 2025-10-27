#include <bits/stdc++.h>
using namespace std;

// 类01背包问题

int t, m, mt[1001], mp[1001], f[101][1001] = {0}, f2[1001] = {0};
int main()
{
    cin >> t >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> mt[i] >> mp[i];
    }

    // f[0][0] = 0;

    // 二维数组遍历可以进行空间优化
    for (int i = 1; i <= m; i++)
    { // 遍历每个药材
        // for (int j = 1; j <= t; j++)
        for (int j = t; j >= 1; j--)
        { // 遍历增长时间
            if (j >= mt[i])
            {
                // f[i][j] = max(f[i - 1][j], f[i - 1][j - mt[i]] + mp[i]);
                f2[j] = max(f2[j], f2[j - mt[i]] + mp[i]); // 优化为一位数组
            }
            else // 注意单独考虑特殊条件
            {
                // f[i][j] = f[i - 1][j];
                // f2[j] = f2[j];//此优化可省略
            }
        }
    }

    // cout << f[m][t] << endl;
    cout << f2[t] << endl;

    return 0;
}
