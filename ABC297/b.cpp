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
    string s;
    cin >> s;
    vector<int> b, r;
    int k;
    rep(i, len(s))
    {
        if (s[i] == 'B')
        {
            b.push_back(i + 1);
        }
        if (s[i] == 'R')
        {
            r.push_back(i + 1);
        }
        if (s[i] == 'K')
        {
            k = i + 1;
        }
    }
    if (b[0] % 2 == b[1] % 2)
    {
        cout << "No" << endl;
        return 0;
    }
    if (r[0] > k || r[1] < k)
    {
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
}
