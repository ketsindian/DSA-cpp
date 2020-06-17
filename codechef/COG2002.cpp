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
        ll n;
        cin>>n;
        ll v[n];
        for (int i = 0; i < n; ++i) {
         cin>>v[i];
        }
        ll max=LONG_LONG_MIN;
        ll sum=0;
        for (int i = 0; i < n; ++i){
            sum=v[i]+v[(i+1)%n]+v[(i+2)%n];
            if(sum>max)
                max=sum;
        }
        cout<<max<<endl;
    }
}