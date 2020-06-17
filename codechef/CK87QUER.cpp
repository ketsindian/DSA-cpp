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
    while(t--){
        ll n;
        cin>>n;
        ll count=0;
        for (ll i = 0; i < 701; ++i) {
            if(n-i<0){
                break;
            }
            if(binary_search(a.begin(),a.end(),n-i))
            count++;
        }
       cout<<count<<endl;
    }
}