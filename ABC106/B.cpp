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

long long enum_divisors(long long N)
{
    long long ans = 0;
    for (long long i = 1; i * i <= N; ++i)
    {
        if (N % i == 0)
        {
            ans += 2;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    reps(i, n + 1)
    {
        if (enum_divisors(i) == 8 && i % 2 == 1)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
