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

ll h, w;
vector<char> snuuke = {'s', 'n', 'u', 'k', 'e'};
vector<pair<ll, ll>> direction = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
bool bfs(vector<string> s)
{
    vector<vector<bool>> seen(h, vector<bool>(w, false));
    map<char, char> mp;
    mp['s'] = 'n';
    mp['n'] = 'u';
    mp['u'] = 'k';
    mp['k'] = 'e';
    mp['e'] = 's';
    queue<pair<ll, ll>> q;
    if (s[0][0] != 's')
    {
        return false;
    }
    q.push({0, 0});
    seen[0][0] = true;
    while (!q.empty())
    {
        pair<ll, ll> top = q.front();
        q.pop();
        for (ll i = 0; i < 4; i++)
        {
            ll nh = top.first + direction[i].first;
            ll nw = top.second + direction[i].second;
            if (nh < 0 || nh >= h || nw < 0 || nw >= w)
            {
                continue;
            }
            if (seen[nh][nw])
            {
                continue;
            }
            if (mp[s[top.first][top.second]] == s[nh][nw])
            {
                q.push({nh, nw});
                seen[nh][nw] = true;
            }
        }
    }
    return seen[h - 1][w - 1];
}

int main()
{
    cin >> h >> w;
    vector<string> s(h);
    rep(i, h)
    {
        cin >> s[i];
    }
    if (bfs(s))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
