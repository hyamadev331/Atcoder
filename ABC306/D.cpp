#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < ll(n); i++)
#define reps(i, n) for (ll i = 1; i < ll(n); i++)
#define rrep(i, n) for (ll i = ll(n); i >= 0; i--)
#define ALL(x) x.begin(), x.end()
#define FOR(i, a, b) for (ll i = a; i <= b; i++) // 使いにくかったら消す
#define len(x) x.length()                        // 配列の長さ
#define SIZE(x) x.size()                         // namestorのサイズ
#define NPOS string::npos                        // findで検索失敗した場合の戻り値(findは文字列内に特定の文字列があるかを判定)
typedef long long ll;
using namespace std;
const ll INF = 1LL << 60; // 無限大

int main()
{
    ll n;
    cin >> n;
    vector<ll> x(n), y(n);
    vector<vector<ll>> dp(n + 1, vector(2, -INF));

    rep(i, n)
    {
        cin >> x[i] >> y[i];
    }

    dp[0][0] = 0;
    dp[0][1] = 0;

    rep(i, n)
    {
        if (x[i] == 0)
        {
            dp[i + 1][0] = max(dp[i + 1][0], dp[i][0] + y[i]);
            dp[i + 1][0] = max(dp[i + 1][0], dp[i][1] + y[i]);
        }
        else
        {
            dp[i + 1][1] = max(dp[i + 1][1], dp[i][0] + y[i]);
        }
        dp[i + 1][0] = max(dp[i + 1][0], dp[i][0]);
        dp[i + 1][1] = max(dp[i + 1][1], dp[i][1]);
    }
    cout << max(dp[n][0], dp[n][1]) << endl;
    return 0;
}
