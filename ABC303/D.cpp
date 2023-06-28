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
    ll x, y, z;
    cin >> x >> y >> z;
    string s;
    cin >> s;
    vector<vector<ll>> dp(len(s) + 1, vector<ll>(2, INF)); // 0:capsがON 1:capsがoff
    dp[0][0] = z;
    dp[0][1] = 0;

    rep(i, len(s))
    {
        if (s[i] == 'A')
        {
            dp[i + 1][0] = min(dp[i + 1][0], dp[i][0] + x);     // capsがonならaだけ押す
            dp[i + 1][1] = min(dp[i + 1][1], dp[i][1] + y);     // capsがoffならshiftを押す
            dp[i + 1][0] = min(dp[i + 1][0], dp[i][1] + z + x); // capsをonにしてaを押す
            dp[i + 1][1] = min(dp[i + 1][1], dp[i][0] + z + y); // capsをoffにしてshiftを押す
        }
        else
        {
            dp[i + 1][0] = min(dp[i + 1][0], dp[i][0] + y);     // capsがonならshiftを押す
            dp[i + 1][1] = min(dp[i + 1][1], dp[i][1] + x);     // capsがoffならaだけ押す
            dp[i + 1][0] = min(dp[i + 1][0], dp[i][1] + z + y); // capsをonにしてshiftを押す
            dp[i + 1][1] = min(dp[i + 1][1], dp[i][0] + z + x); // capsをoffにしてaを押す
        }
    }

    cout << min(dp[len(s)][0], dp[len(s)][1]) << endl;

    return 0;
}
