#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> VLL;
typedef set<ll> SLL;
typedef pair<ll, ll> PLL;
#define lim 10000007
#define mod 1000000007

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,m;
        cin>>a>>m;
        SLL div,ans;
        for(ll i=1;i*i<m;i++){
            if(m%i==0){
                div.insert(m/i);
                div.insert(i);
            }
        }
        for(auto d:div){
            ll rem=m/d-1;
            if(rem%a==0){
                ans.insert(rem*d/a);
            }
        }
        ans.erase(0);
        cout<<ans.size()<<endl;
        for(auto answ:ans)
            cout<<answ<<" ";
        cout<<endl;
    }
}

