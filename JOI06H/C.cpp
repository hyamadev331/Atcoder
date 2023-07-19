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
    int n, ans = 0;
    cin >> n;
    vector<pair<int, int>> c(n);
    rep(i, n)
    {
        cin >> c[i].first >> c[i].second;
    }
    sort(c.begin(), c.end());
    rep(i, n)
    {
        rep(j, n)
        {
            pair<int, int> c1, c2;
            int dx = c[j].first - c[i].first;
            int dy = c[j].second - c[i].second;
            c1.first = c[j].first - dy;
            c1.second = c[j].second + dx;
            c2.first = c[i].first - dy;
            c2.second = c[i].second + dx;
            if (binary_search(c.begin(), c.end(), c1) and binary_search(c.begin(), c.end(), c2))
            {
                ans = max(ans, (dx * dx + dy * dy));
            }
        }
    }
    cout << ans << endl;
    return 0;
}
