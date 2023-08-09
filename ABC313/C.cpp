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
    int n;
    ll sum = 0;
    cin >> n;
    vector<ll> a(n);
    rep(i, n)
    {
        cin >> a[i];
        sum += a[i];
    }

    vector<ll> avg(n, sum / n);
    rep(i, sum % n)
    {
        avg[n - i - 1]++;
    }

    ll ans = 0;
    sort(a.begin(), a.end());
    rep(i, n)
    {
        ans += abs(a[i] - avg[i]);
    }
    cout << ans / 2 << endl;

    return 0;
}
