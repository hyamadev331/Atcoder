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
    string s[h];
    int ax = 0, ay = 0, mx = 0;
    rep(i, h)
    {
        cin >> s[i];
    }

    rep(i, h)
    {
        rep(j, w)
        {
            int tmp = 0;
            if (s[i][j] != '.')
            {
                continue;
            }
            if (i - 1 >= 0 && s[i - 1][j] == '#')
            {
                tmp++;
            }
            if (i + 1 < h && s[i + 1][j] == '#')
            {
                tmp++;
            }
            if (j - 1 >= 0 && s[i][j - 1] == '#')
            {
                tmp++;
            }
            if (j + 1 < w && s[i][j + 1] == '#')
            {
                tmp++;
            }
            if (tmp > mx)
            {
                ax = i + 1;
                ay = j + 1;
                mx = tmp;
            }
        }
    }
    cout << ax << " " << ay << endl;
    return 0;
}
