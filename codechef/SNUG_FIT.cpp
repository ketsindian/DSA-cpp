#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> VLL;
typedef set<ll> SLL;
typedef pair<ll, ll> PLL;
#define lim 10000007
#define mod 1000000007

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        VLL a,b;
        for (ll i = 0; i < n; i++) {
            ll tmp;
            cin>>tmp;
            a.push_back(tmp);
        }
        for (ll i = 0; i < n; i++) {
            ll tmp;
            cin>>tmp;
            b.push_back(tmp);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        ll sum=0;
        for (ll i = 0; i < n; i++) {
            sum+=min(a[i],b[i]);
        }
        cout<<sum<<endl;
    }
}