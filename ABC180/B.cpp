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
    int n;
    long ans1 = 0, ans2 = 0, ans3 = 0;
    cin >> n;
    rep(i, n)
    {
        long x;
        cin >> x;
        ans1 += abs(x);
        ans2 += abs(x) * abs(x);
        ans3 = max(ans3, (long)(abs(x)));
    }

    cout << ans1 << endl;
    cout << fixed << setprecision(15) << sqrt(ans2) << endl;
    cout << ans3 << endl;

    return 0;
}
