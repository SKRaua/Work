#include <bits/stdc++.h>
using namespace std;

int n, w, a[1001], f[10001] = {0};
const int MOD = 1e9 + 7;
int main()
{
    cin >> n >> w;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    // 此处可以考虑加入有效纸币过滤

    f[0] = 1;

    // 此处需要过滤排列重复情况，先遍历面额
    for (int j = 1; j <= n; j++)
    {
        for (int i = a[j]; i <= w; i++)
        {
                f[i] = (f[i] + f[i - a[j]]) % MOD;
                // ‼️ 每一步都要取模防止溢出
        }
    }

    cout << f[w];

    return 0;
}