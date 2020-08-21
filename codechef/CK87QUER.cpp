#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> VLL;
typedef set<ll> SLL;
typedef pair<ll, ll> PLL;
typedef map<ll ,ll> MLL;
#define lim 10000000000
#define mod 1000000007

int main (){
    ll n=sqrt(lim);
    VLL a;
    for (int i = 0; i < n+1; ++i) {
        a.push_back(pow(i,2));
    }
    ll t;
    cin>>t;
    set <ll> s;
    while(t--){
        ll n;
        cin>>n;
        ll count=0;
        ll x=n>700? n-700:n;
        for (ll i = 0; i < x; ++i) {
            if(i<0){
                break;
            }
            s.insert(sqrt(i));
        }
       cout<<s.size()<<endl;
    }
}