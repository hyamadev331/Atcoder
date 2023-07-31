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
    ll div = 998244353;
    string s;
    cin >> s;
    vector<vector<ll>> dp(len(s) + 1, vector<ll>(len(s) + 1, 0));
    dp[0][0] = 1;
    rep(i, len(s))
    {
        rep(j, len(s))
        {
            if (s[i] == '(' or s[i] == '?')
            {
                dp[i + 1][j + 1] += dp[i][j] % div;
            }
            if ((s[i] == ')' or s[i] == '?') and j != 0)
            {
                dp[i + 1][j - 1] += dp[i][j] % div;
            }
        }
    }
    cout << dp[len(s)][0] << endl;
    return 0;
}
