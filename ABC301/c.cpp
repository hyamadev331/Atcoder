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
    string s, t;
    cin >> s >> t;
    map<char, int> mp;
    int sa = 0, sc = 0, ta = 0, tc = 0;
    cout << count(s.begin(), s.end(), '@') << endl;
    cout << count(t.begin(), t.end(), '@') << endl;
    rep(i, len(s))
    {
        if (t.find(s[i]) != string::npos)
        {
            sc++;
        }
        if (s[i] == '@')
        {
            sa++;
        }
    }

    rep(i, len(t))
    {
        if (s.find(t[i]) != string::npos)
        {
            tc++;
        }
        if (t[i] == '@')
        {
            ta++;
        }
    }
    cout << sa << " " << sc << " " << ta << " " << tc << endl;
    if (sa == tc && ta == sc)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}