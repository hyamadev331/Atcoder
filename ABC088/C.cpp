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
    vector<vector<int>> c(3, vector<int>(3));
    rep(i, 3)
    {
        rep(j, 3)
        {
            cin >> c[i][j];
        }
    }
    rep(i, 101)
    {
        rep(j, 101)
        {
            rep(k, 101)
            {
                int a1 = i, a2 = j, a3 = k;
                int b1 = c[0][0] - i, b2 = c[1][1] - j, b3 = c[2][2] - k;
                if (a1 + b2 == c[0][1] && a1 + b3 == c[0][2] && a2 + b1 == c[1][0] && a2 + b3 == c[1][2] && a3 + b1 == c[2][0] && a3 + b2 == c[2][1])
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
