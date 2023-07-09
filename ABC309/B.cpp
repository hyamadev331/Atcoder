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
    vector<vector<char>> b(n, vector<char>(n));
    rep(i, n)
    {
        rep(j, n)
        {
            cin >> b[i][j];
        }
    }

    rep(i, n)
    {
        rep(j, n)
        {
            if (i == 0)
            {
                if (j == 0)
                {
                    cout << b[i + 1][j];
                }
                else
                {
                    cout << b[i][j - 1];
                }
            }
            else if (i == n - 1)
            {
                if (j == n - 1)
                {
                    cout << b[i - 1][j];
                }
                else
                {
                    cout << b[i][j + 1];
                }
            }
            else
            {
                if (j == 0)
                {
                    cout << b[i + 1][j];
                }
                else if (j == n - 1)
                {
                    cout << b[i - 1][j];
                }
                else
                {
                    cout << b[i][j];
                }
            }
        }
        cout << endl;
    }

    return 0;
}
