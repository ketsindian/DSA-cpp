#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> VLL;
typedef set<ll> SLL;
typedef pair<ll, ll> PLL;
typedef map<ll ,ll> MLL;
#define lim 10000007
#define mod 1000000007

int main (){
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        map<ll,ll> mp;
        ll cntg=0;
        ll cntl=0;
        for (int i = 0; i < n; ++i) {
            ll tmp;
            cin>>tmp;
            if(tmp>m)
                cntg++;
            mp[tmp]++;
        }

        bool flag=true;
        ll mi=m;
        while(--mi){
            if(mp[mi]>0){
                cntl+=mp[mi];
            }else{
                flag=false;
                break;
            }
        }
        if(!flag){
            ll ans=cntg==0?-1:cntg;
            cout<<ans<<endl;
            continue;
        }
        ll ans=cntg+cntl==0?-1:cntg+cntl;
        cout<<ans<<endl;
    }
}