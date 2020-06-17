#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
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
        if(n==0 || n==1 ||n==2)
            cout<<0<<endl;
        else if(n%2==1)
            cout<<n/2<<endl;
        else if((n & (n - 1))==0)
            cout<<0<<endl;
        else if(n%4!=0)
            cout<<(n/4)<<endl;
        else if(n%4==0)
            cout<<(ll)log2(n) -2<<endl;
    }
}