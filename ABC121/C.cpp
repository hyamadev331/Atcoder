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
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> p(n);
    rep(i, n)
    {
        cin >> p[i].first >> p[i].second;
    }
    sort(p.begin(), p.end());
    ll ans = 0;
    rep(i, n)
    {
        if (m - p[i].second <= 0)
        {
            ans += p[i].first * m;
            cout << ans << endl;
            return 0;
        }
        else
        {
            ans += p[i].first * p[i].second;
            m -= p[i].second;
        }
    }
    return 0;
}
