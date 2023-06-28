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
    ll n, m, h, k;
    cin >> n >> m >> h >> k;
    map<pair<ll, ll>, ll> c;
    string s;
    cin >> s;
    rep(i, m)
    {
        int x, y;
        cin >> x >> y;
        c[make_pair(x, y)]++;
    }
    int sx = 0, sy = 0;
    rep(i, n)
    {
        h--;
        if (h < 0)
        {
            cout << "No" << endl;
            return 0;
        }
        if (s[i] == 'U')
        {
            sy++;
        }
        else if (s[i] == 'D')
        {
            sy--;
        }
        else if (s[i] == 'R')
        {
            sx++;
        }
        else
        {
            sx--;
        }
        if (c[make_pair(sx, sy)] > 0 && h < k)
        {
            h = k;
            c[make_pair(sx, sy)]--;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
