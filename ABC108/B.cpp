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
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int ax = x2 - x1, ay = y2 - y1;
    int x = x2, y = y2;
    rep(i, 2)
    {
        int ox = x, oy = y;
        x -= ay;
        y += ax;
        ax = x - ox;
        ay = y - oy;
        cout << x << " " << y;
        if (i == 0)
        {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
