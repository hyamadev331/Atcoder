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

typedef struct
{

    int prev = -1;

    int next = -1;

} Node;

vector<int> ans;

int main(void)
{

    int n, m;

    cin >> n >> m;

    vector<Node> nodes(n);

    for (int i = 0; i < m; i++)
    {

        int a, b;

        cin >> a >> b;

        nodes[a - 1].next = b - 1;

        nodes[b - 1].prev = a - 1;
    }

    for (int i = 0; i < n; i++)
    {

        if (nodes[i].prev == -1)
        {

            ans.push_back(i + 1);
        }
    }

    if (ans.size() == 1)
    {

        cout << ans[0] << endl;
    }
    else
    {

        cout << -1 << endl;
    }

    return 0;
}