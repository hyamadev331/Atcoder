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
    vector<int> a(m);
    rep(i, m) cin >> a[i];
    vector<int> tmp, ans;
    tmp.push_back(1);
    int idx = 0;
    for (int i = 2; i <= n; i++)
    {
        if (idx < m && i - 1 == a[idx])
        {
            tmp.push_back(i);
            idx++;
        }
        else
        {
            reverse(tmp.begin(), tmp.end());
            for (auto &v : tmp)
            {
                ans.push_back(v);
            }
            tmp.clear();
            tmp.push_back(i);
        }
    }
    reverse(tmp.begin(), tmp.end());
    for (auto &v : tmp)
    {
        ans.push_back(v);
    }
    rep(i, size(ans))
    {
        cout << ans[i];
        if (i != size(ans) - 1)
        {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}
