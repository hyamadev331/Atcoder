#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < ll(n); i++)
#define reps(i, n) for (ll i = 1; i < ll(n); i++)
#define rrep(i, n) for (ll i = ll(n); i >= 0; i--)
#define ALL(x) x.begin(), x.end()
#define FOR(i, a, b) for (ll i = a; i <= b; i++) // 使いにくかったら消す
#define len(x) x.length()                        // 配列の長さ
#define SIZE(x) x.size()                         // vectorのサイズ
#define NPOS string::npos                        // findで検索失敗した場合の戻り値(findは文字列内に特定の文字列があるかを判定)
typedef long long ll;
using namespace std;
const ll INF = 1LL << 60; // 無限大

int main()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a, b;
    rep(i, n)
    {
        ll tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    rep(i, m)
    {
        ll tmp;
        cin >> tmp;
        b.push_back(tmp);
    }
    vector<ll> c(n + m);
    merge(a.begin(), a.end(), b.begin(), b.end(), c.begin());
    rep(i, n)
    {
        cout << lower_bound(c.begin(), c.end(), a.at(i)) - c.begin() + 1;
        if (i != n - 1)
        {
            cout << " ";
        }
    }
    cout << endl;

    rep(i, m)
    {
        cout << lower_bound(c.begin(), c.end(), b.at(i)) - c.begin() + 1;
        if (i != m - 1)
        {
            cout << " ";
        }
    }
    cout << endl;
}
