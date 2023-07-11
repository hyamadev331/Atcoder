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
    vector<int> n(5);
    vector<int> ans;
    rep(i, 5)
    {
        cin >> n[i];
    }
    rep(i, 5)
    {
        rep(j, 5)
        {
            rep(k, 5)
            {
                if (i != j && i != k && j != k)
                {
                    ans.emplace_back(n[i] + n[j] + n[k]);
                }
            }
        }
    }
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    cout << ans[ans.size() - 3] << endl;
    return 0;
}
