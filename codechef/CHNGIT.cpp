#include <bits/stdc++.h>
#define ll int
#define lim 11000000
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        map<ll,ll> mp;
        for(int k=0;k<n;k++){
            ll tmp;
            cin>>tmp;
            mp[tmp]++;
        }
        ll max=INT32_MIN;
        for(auto i=mp.begin();i!=mp.end();i++){
            if(i->second>max){
                max=i->second;
            }
        }
        cout<<n-max<<endl;
    }
}