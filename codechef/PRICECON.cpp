#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> VLL;
typedef set<ll> SLL;
typedef pair<ll, ll> PLL;
typedef map<ll ,ll> MLL;
#define lim 10000007
#define mod 1000000007

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll sum=0;
        while(n--){
            ll tmp;
            cin>>tmp;
            if(tmp>k)
            sum+=tmp-k;
        }
        cout<<sum<<endl;
    }
}