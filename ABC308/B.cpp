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
    ll n,m;
    cin>>n>>m;
    string c[n],d[m];
    ll ans =0;
    ll p0;
    map<string,int> mp;
    rep(i,n){
        cin>>c[i];
    }
    rep(i,m){
        cin>>d[i];
    }
    rep(i,m+1){ 
       int p;
       cin>>p;
       if(i==0){
        p0=p;
       }else{
        mp[d[i-1]]=p;
       }
    }

    rep(i,n){
        if(mp[c[i]]==0){
            ans+=p0;
        }else{
            ans+=mp[c[i]];
        }
    }
    cout<<ans<<endl;
    return 0;
}
