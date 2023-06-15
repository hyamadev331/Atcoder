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

int main(void)
{
    int n, d;
    cin >> n >> d;
    queue<int> que;
    vector<pair<int, int>> coord(n);
    vector<vector<bool>> g(n, vector<bool>(n));
    vector<bool> ans(n);

    rep(i, n)
    {
        cin >> coord[i].first >> coord[i].second;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((coord[i].first - coord[j].first) * (coord[i].first - coord[j].first) + (coord[i].second - coord[j].second) * (coord[i].second - coord[j].second) <= d * d)
            {
                g[i][j] = true;
            }
        }
    }

    que.push(0);
    ans[0] = "Yes";

    while (!que.empty())
    {
        int v = que.front();
        que.pop();
        for (int i = 0; i < n; i++)
        {
            if (g[v][i] && !ans[i])
            {
                que.push(i);
                ans[i] = true;
            }
        }
    }

    for (auto i : ans)
    {
        if (i)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}