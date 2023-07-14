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
    int n, m, x;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    rep(i, n)
    {
        cin >> a[i];
    }
    cin >> m;
    rep(i, m)
    {
        int b;
        cin >> b;
        mp[b]++;
    }
    cin >> x;
    vector<bool> dp(x + 1, false);
    dp[0] = true;

    reps(i, x + 1)
    {
        if (mp[i] != 0)
        {
            continue;
        }
        for (auto &v : a)
        {
            if (i >= v)
            {
                dp[i] = dp[i] || dp[i - v];
            }
        }
    }

    cout << endl;
    cout << (dp[x] ? "Yes" : "No") << endl;
    return 0;
}
