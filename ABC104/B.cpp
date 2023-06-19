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
    if (s[0] != 'A')
    {
        cout << "WA" << endl;
        return 0;
    }
    int cnt_c = 0, cnt_m = 0;
    reps(i, len(s))
    {
        if (s[i] == 'C' && i > 1 && i < len(s) - 1)
        {
            cnt_c++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            cnt_m++;
        }
    }
    if (cnt_c == 1 && cnt_m == len(s) - 2)
    {
        cout << "AC" << endl;
    }
    else
    {
        cout << "WA" << endl;
    }
    return 0;
}