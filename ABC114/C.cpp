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

ll n;
ll ans = 0;
void solve(ll x)
{
    if (x > n)
    {
        return;
    }
    string s = to_string(x);
    if (s.find("7") != NPOS && s.find("5") != NPOS && s.find("3") != NPOS)
    {
        ans++;
    }
    solve(x * 10 + 3);
    solve(x * 10 + 5);
    solve(x * 10 + 7);
}

int main()
{
    cin >> n;
    solve(0);
    cout << ans << endl;
    return 0;
}
