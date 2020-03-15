#include <bits/stdc++.h>
#define ll long long int

using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n;
        cin>>m;
        map<ll,ll> mp1;
        map<ll,ll> mp2;
        map<ll,ll> res;
        for(ll i=0;i<n;i++){
             ll tmp;
             cin>>tmp;
             mp1[i]=tmp;
        }
        for(ll i=0;i<m;i++){
            ll tmp;
            cin>>tmp;
            mp2[i]=tmp;
        }
        for(auto a:mp1){
            for(auto b:mp2){
                res[a.first+b.first]+=a.second*b.second;
            }
        }
        for(auto c:res){
            cout<<c.second<<" ";
        }
        cout<<endl;
    }
    return 0;
}
