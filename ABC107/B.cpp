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
    int h, w;
    cin >> h >> w;
    vector<vector<char>> a(h, vector<char>(w));
    vector<bool> flg_h(h, true), flg_w(w, true);
    rep(i, h)
    {
        int cnt = 0;
        rep(j, w)
        {
            cin >> a[i][j];
            if (a[i][j] == '.')
            {
                cnt++;
            }
        }
        if (cnt == w)
        {
            flg_h[i] = false;
        }
    }

    rep(i, w)
    {
        int cnt = 0;
        rep(j, h)
        {
            if (a[j][i] == '.')
            {
                cnt++;
            }
        }
        if (cnt == h)
        {
            flg_w[i] = false;
        }
    }

    rep(i, h)
    {
        bool lf = false;
        rep(j, w)
        {
            if (flg_h[i] && flg_w[j])
            {
                cout << a[i][j];
                lf = true;
            }
        }
        if (lf)
        {
            cout << endl;
        }
    }
    return 0;
}
