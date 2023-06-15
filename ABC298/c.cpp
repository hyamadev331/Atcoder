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
    cin >> n >> q;
    vector<vector<int>> box(200010, vector<int>());
    vector<vector<int>> mp(200010, vector<int>());
    rep(i, q)
    {
        int query;
        cin >> query;
        if (query == 1)
        {
            int j, k;
            cin >> j >> k;
            box[k].push_back(j);
            mp[j].push_back(k);
        }
        else if (query == 2)
        {
            int j;
            cin >> j;
            sort(box[j].begin(), box[j].end());
            for (int k = 0; k < box[j].size(); k++)
            {
                cout << box[j][k];
                if (k != box[j].size() - 1)
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        else
        {
            int j;
            cin >> j;
            for (int k = 0; k < mp[j].size(); k++)
            {
                std::sort(mp[j].begin(), mp[j].end());
                mp[j].erase(std::unique(mp[j].begin(), mp[j].end()), mp[j].end());
                cout << mp[j][k];
                if (k != mp[j].size() - 1)
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
}