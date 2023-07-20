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
    ll n, ans = 0;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    rep(i, n)
    {
        cin >> b[i];
    }
    rep(i, n)
    {
        cin >> c[i];
    }
    sort(a.begin(), a.end());
    sort(c.begin(), c.end());
    rep(i, n)
    {
        // cout << *lower_bound(a.begin(), a.end(), b[i]) << " " << *lower_bound(c.begin(), c.end(), b[i]) << " " << b[i] << endl;
        ll da = a.end() - lower_bound(a.begin(), a.end(), b[i]);
        ll dc = c.end() - upper_bound(c.begin(), c.end(), b[i]);
        ans += (n - da) * dc;
    }

    cout << ans << endl;
    return 0;
}
