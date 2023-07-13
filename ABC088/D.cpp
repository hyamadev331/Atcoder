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
    int white = 0;
    int h, w;
    cin >> h >> w;
    queue<pair<int, int>> q;
    vector<vector<char>> a(h, vector<char>(w));
    vector<vector<int>> step(h, vector<int>(w, -1));
    rep(i, h)
    {
        rep(j, w)
        {
            cin >> a[i][j];
            if (a[i][j] == '.')
                white++;
        }
    }
    q.push({0, 0});
    while (!q.empty())
    {
        pair<int, int> top = q.front();
        q.pop();
        for (int i = -1; i <= 1; i++)
        {
            for (int j = -1; j <= 1; j++)
            {
                if (i != 0 && j != 0)
                    continue;
                int nh = top.first + i;
                int nw = top.second + j;
                if (nh >= 0 && nh < h && nw >= 0 && nw < w && a[nh][nw] != '#' && step[nh][nw] == -1)
                {
                    q.push({nh, nw});
                    step[nh][nw] = step[top.first][top.second] + 1;
                }
            }
        }
    }
    if (step[h - 1][w - 1] == -1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << white - step[h - 1][w - 1] - 1 << endl;
    }
}