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

bool isOk(string s)
{
    rep(i, len(s))
    {
        if (s[i] != 'A' and s[i] != 'C' and s[i] != 'G' and s[i] != 'T')
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s, ans;
    cin >> s;
    for (int i = 0; i < len(s); i++)
    {
        for (int j = 0; j < len(s) - i + 1; j++)
        {
            string t = s.substr(i, j);
            if (isOk(t))
            {
                if (len(t) > len(ans))
                {
                    ans = t;
                }
            }
        }
    }
    cout << len(ans) << endl;
    return 0;
}
