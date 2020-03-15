#include <bits/stdc++.h>
using namespace std;
typedef int ll;
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
        ll s,a,b,c,d,e,v;
        cin>>a;
        s=pow(10,n)-1;
        cout<<s<<endl;
        fflush(stdout);
        s-=a;
        cin>>b;
        s-=b;
        c=1;
        s--;
        cout<<c<<endl;
        fflush(stdout);
        cin>>d;
        s-=d;
        e=s;
        cout<<e<<endl;
        fflush(stdout);
        cin>>v;
        if(v==-1)
            break;
    }
}