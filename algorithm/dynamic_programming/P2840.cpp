#include <bits/stdc++.h>
using namespace std;

int n, w, a[1001], f[10001];
const int MOD = 1e9 + 7;
int main()
{
    cin >> n >> w;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    //此处可以考虑加入有效纸币过滤

    f[0] = 1;

    // 对于不同货币1+2，2+1属于不同方案，先遍历金额再遍历面值，使得面值的不同排列也被计算
    // 且每次遍历到同一金额时考虑为新加一张纸币的贡献所以不会造成2+2，2+2类似的重复排列
    for (int i = 1; i <= w; i++)
    {
        f[i] = 0; // 初始化需要的位数
        for (int j = 1; j <= n; j++)
        {
            if (i >= a[j])
            {
                f[i] = (f[i] + f[i - a[j]]) % MOD;
                // ‼️ 每一步都要取模防止溢出
            }
        }
    }

    cout << f[w];

    return 0;
}