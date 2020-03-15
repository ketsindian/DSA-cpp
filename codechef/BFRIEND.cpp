#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> VLL;
typedef set<ll> SLL;
typedef pair<ll, ll> PLL;
#define lim 10000007
#define mod 1000000007

int main (){
    ll t;
    cin>>t;
    while(t--){
        ll n,a,b,c;
        cin>>n>>a>>b>>c;
        ll min=LONG_LONG_MAX;
        for(ll i=i=0;i<n;i++){
            ll tmp;
            cin>>tmp;
            ll d=abs(b-tmp)+abs(a-tmp)+c;
            if(d<min)
                min=d;
        }
        cout<<min<<endl;
    }

}