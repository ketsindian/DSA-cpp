#include <bits/stdc++.h>
using namespace std;
typedef int ll;
typedef vector<ll> VLL;
typedef set<ll> SLL;
typedef pair<ll, ll> PLL;
#define lim 10000007
#define mod 1000000007

int main(){
    ll n,m;
    cin>>n>>m;
    vector<string> ns,ms;
    for(ll i=0;i<n;i++){
        string tmp;
        cin>>tmp;
        ns.push_back(tmp);
    }
    for(ll i=0;i<m;i++){
        string tmp;
        cin>>tmp;
        ms.push_back(tmp);
    }
    ll q;
    cin>>q;
    while(q--){
        ll tmp;
        cin>>tmp;
        if(tmp%n-1<0)
            cout<<ns[n-1];
        else
            cout<<ns[tmp%n-1];
        if(tmp%m-1<0)
            cout<<ms[m-1];
        else
            cout<<ms[tmp%m-1];
        cout<<endl;
    }

}