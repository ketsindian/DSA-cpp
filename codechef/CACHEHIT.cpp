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
        ll n,b,m;
        cin>>n>>b>>m;
        ll cnt=1;
        ll a[m];
        cin>>a[0];
        for (int i = 1; i <m ; ++i) {
            cin>>a[i];
            if(int(a[i-1])/b!=int(a[i]/b)){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}