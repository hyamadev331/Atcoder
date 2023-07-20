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
    vector<int> k(m);
    vector<vector<int>> s(m);
    vector<int> p(m);
    int ans = 0;

    rep(i, m)
    {
        cin >> k[i];
        s[i].resize(k[i]);
        rep(j, k[i])
        {
            cin >> s[i][j];
        }
    }
    rep(i, m)
    {
        cin >> p[i];
    }

    rep(bit, 1 << n)
    {
        int count = 0;
        rep(i, m)
        {
            int sum = 0;
            rep(j, k[i])
            {
                if ((1 << (s[i][j] - 1) & bit))
                {
                    sum++;
                }
            }
            if (sum % 2 == p[i])
            {
                count++;
            }
        }
        if (count == m)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
