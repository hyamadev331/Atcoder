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
    cin >> n;
    vector<vector<int>> A(n, vector<int>(n));
    vector<pair<int, int>> direction{make_pair(0, 1), make_pair(1, 1), make_pair(1, 0), make_pair(1, -1), make_pair(0, -1), make_pair(-1, -1), make_pair(-1, 0), make_pair(-1, 1)};
    rep(i, n)
    {
        rep(j, n)
        {
            char a;
            cin >> a;
            A[i][j] = a - '0';
        }
    }
    ll ans = 0;
    rep(x, n)
    {
        rep(y, n)
        {
            rep(i, 8)
            {
                ll tmx = x, tmy = y, tmp = 0;
                rep(j, n)
                {
                    tmp *= 10;
                    tmp += A[tmx][tmy];
                    tmx += direction[i].first + n;
                    tmy += direction[i].second + n;
                    tmx %= n;
                    tmy %= n;
                }
                ans = max(ans, tmp);
            }
        }
    }

    cout << ans << endl;
    return 0;
}
