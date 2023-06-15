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
    int n, q;
    cin >> n;
    vector<int> a(n + 1, 0);
    vector<int> sleep(n + 1, 0);
    vector<int> answer;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i % 2 == 0)
        {
            sleep[i + 1] = sleep[i] + a[i] - a[i - 1];
        }
        else
        {
            sleep[i + 1] = sleep[i];
        }
    }
    cin >> q;
    rep(i, q)
    {
        int l, r;
        cin >> l >> r;
        int le = lower_bound(a.begin(), a.end(), l) - a.begin();
        int re = upper_bound(a.begin(), a.end(), r) - a.begin();
        cout << le << " " << re << endl;
        cout << sleep[le + 1] - l << endl;
        cout << sleep[re] - (a[re - 1] - r) << endl;
        answer.push_back(sleep[re] - sleep[le]);
    }
    for (auto &e : answer)
    {
        cout << e << endl;
    }

    return 0;
}
