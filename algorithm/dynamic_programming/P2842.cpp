#include <bits/stdc++.h>
using namespace std;

int n, w, a[10000], dp[100000];
int main()
{
    cin >> n >> w;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    dp[0] = 0; // 初状态
    for (int i = 1; i <= w; i++)
    { // 先遍历金额
        dp[i] = 66666666;
        for (int j = 1; j < n; j++)
        { // 后遍历面额
            if (i >= a[j])
            {
                dp[i] = min(dp[i], dp[i - a[j]] + 1);
            }
        }
    }
    cout << dp[w] << endl;

    // O(n*w)

    return 0;
}