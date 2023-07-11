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
    int n, m, c, ans = 0;
    cin >> n >> m >> c;
    vector<int> b(m);
    rep(i, m)
    {
        cin >> b[i];
    }
    rep(i, n)
    {
        int res = 0;
        rep(j, m)
        {
            int a;
            cin >> a;
            res += a * b[j];
        }
        if (res + c > 0)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
