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
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    rep(i, n)
    {
        cin >> s[i];
    }
    rep(i, n - 8)
    {
        rep(j, m - 8)
        {
            // cout << i << " " << j << endl;
            bool flg = true;
            // 左上
            for (int x = i; x <= i + 2; x++)
            {
                for (int y = j; y <= j + 2; y++)
                {
                    if (s[x][y] != '#')
                    {
                        flg = false;
                    }
                    if (x == i + 2 && s[x + 1][y] == '#')
                    {
                        flg = false;
                    }
                    if (y == j + 2 && s[x][y + 1] == '#')
                    {
                        flg = false;
                    }
                }
            }
            // 右下
            for (int x = i + 6; x <= i + 8; x++)
            {
                for (int y = j + 6; y <= j + 8; y++)
                {
                    if (s[x][y] != '#')
                    {
                        flg = false;
                    }
                    if (x == i + 6 && s[x - 1][y] == '#')
                    {
                        flg = false;
                    }
                    if (y == j + 6 && s[x][y - 1] == '#')
                    {
                        flg = false;
                    }
                }
            }
            if (flg)
            {
                cout << i + 1 << " " << j + 1 << endl;
            }
        }
    }
    return 0;
}
