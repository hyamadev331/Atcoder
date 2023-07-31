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
    vector<ll> a(n), b(m);
    ll right = 0;
    rep(i, n)
    {
        cin >> a[i];
        right = max(right, a[i]);
    }
    rep(i, m)
    {
        cin >> b[i];
        right = max(right, b[i]);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll left = 0;

    while (left <= right)
    {
        int i = (left + right) / 2;
        ll na = upper_bound(a.begin(), a.end(), i) - a.begin();
        ll nb = b.end() - lower_bound(b.begin(), b.end(), i);
        if (na >= nb)
        {
            right = i - 1;
        }
        else
        {
            left = i + 1;
        }
    }
    cout << left << endl;
    return 0;
}
