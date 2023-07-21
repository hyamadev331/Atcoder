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
    int ans = 0;
    cin >> n >> m;
    vector<vector<bool>> isFriend(n, vector<bool>(n, false));
    rep(i, m)
    {
        int x, y;
        cin >> x >> y;
        isFriend[x - 1][y - 1] = true;
        isFriend[y - 1][x - 1] = true;
    }

    rep(bit, 1 << n)
    {
        vector<int> group;
        rep(i, n)
        {
            if (bit & (1 << i))
            {
                group.emplace_back(i);
            }
            bool flg = true;
            rep(i, SIZE(group))
            {
                rep(j, SIZE(group))
                {
                    if (i == j)
                    {
                        continue;
                    }
                    if (!isFriend[group[i]][group[j]])
                    {
                        flg = false;
                    }
                }
            }
            if (flg)
            {
                ans = max(ans, int(SIZE(group)));
            }
        }
    }
    cout << ans << endl;
    return 0;
}
