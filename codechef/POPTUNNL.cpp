#include <bits/stdc++.h>
using namespace std;
typedef int ll;
typedef vector<ll> VLL;
typedef set<ll> SLL;
typedef pair<ll, ll> PLL;
#define lim 10000007
#define mod 1000000007

int main (){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        map<ll,vector<ll>> mp;
        for(ll i=0;i<n;i++){
            string s;
            cin>>s;
            vector<ll> v;
            for(ll j=0;j<n;j++){
                if(s[j]=='1' && i!=j && abs(j-i)<=k){
                    v.push_back(j);
                }
            }
            mp[i]=v;
        }
        for(pair<ll,vector<ll>> v:mp){
            for(auto itr=v.second.begin();itr!=v.second.end();itr++){
                
            }
        }
        cout<<"hello";
    }
}