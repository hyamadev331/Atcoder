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

ll d = 1e9 + 7;

ll fact(int n)
{
    ll ans = 1;
    reps(i, n + 1)
    {
        ans *= i;
        ans %= d;
    }
    return ans;
}

int main()
{
    ll n, m;
    cin >> n >> m;
    if (abs(n - m) > 1)
    {
        cout << 0 << endl;
    }
    else if (n == m)
    {
        cout << (2 * fact(n) * fact(m)) % d << endl;
    }
    else
    {
        cout << (fact(n) * fact(m)) % d << endl;
    }
    return 0;
}
