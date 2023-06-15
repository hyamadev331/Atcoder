#include <iostream>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int n = S.size();
    map<string, int> count;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        string sub = "";
        for (int j = i; j < n; j++)
        {
            sub += S[j];
            sort(sub.begin(), sub.end());
            count[sub]++;
            if (count[sub] == 2)
                ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
