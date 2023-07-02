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
    ll n;
    cin >> n;
    vector<long double> a(n), b(n);
    vector<pair<long double, ll>> ans;
    rep(i, n)
    {
        cin >> a[i] >> b[i];
        ans.push_back(make_pair(-a[i] / (a[i] + b[i]), i + 1));
    }
    sort(ans.begin(), ans.end());
    for (auto &i : ans)
    {
        cout << i.second << endl;
    }
    return 0;
}
