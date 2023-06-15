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
    int n;
    cin >> n;
    vector<int> a(n), ans;

    rep(i, n)
    {
        cin >> a[i];
    }

    rep(i, n - 1)
    {
        if (a[i] < a[i + 1])
        {
            for (int j = a[i]; j <= a[i + 1] - 1; j++)
            {
                ans.push_back(j);
            }
        }
        else
        {
            for (int j = a[i]; j >= a[i + 1] + 1; j--)
            {
                ans.push_back(j);
            }
        }
    }
    ans.push_back(a[n - 1]);
    rep(i, SIZE(ans))
    {
        cout << ans[i];
        if (i != SIZE(ans) - 1)
            cout << " ";
    }
    cout << endl;
    return 0;
}