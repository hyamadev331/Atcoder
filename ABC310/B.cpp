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
    vector<ll> p(n), c(n);
    vector<vector<ll>> f(n);
    rep(i, n)
    {
        cin >> p[i] >> c[i];
        rep(j, c[i])
        {
            int x;
            cin >> x;
            f[i].push_back(x);
        }
    }
    rep(i, n)
    {
        rep(j, n)
        {
            if (i == j)
            {
                continue;
            }

            if (p[i] >= p[j])
            {
                bool flg = true;
                rep(k, c[i])
                {
                    if (find(f[j].begin(), f[j].end(), f[i][k]) == f[j].end())
                    {
                        flg = false;
                    }
                }
                if (!flg)
                {
                    continue;
                }
                if (c[j] > c[i] || p[i] > p[j])
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
