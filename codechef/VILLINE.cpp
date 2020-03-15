#include <bits/stdc++.h>
using namespace std;
typedef int ll;
typedef vector<ll> VLL;
typedef set<ll> SLL;
typedef pair<ll, ll> PLL;
#define lim 10000007
#define mod 1000000007

int main (){
    ll n,m,c;
    cin>>n;
    cin>>m>>c;
    ll x1,y1,x2,y2;
    x1=1-c;
    y2=1;
    y1=c;
    x2=-c/m;
    ll suml=0;
    ll sumr=0;
    while(n--){
        ll x,y,p;
        cin>>x>>y>>p;

        ll res=(x-x1)*(y2-y1)-(y-y1)*(x2-x1);
        if( res<0){
            suml+=p;
        }else{
            sumr+=p;
        }
    }
    cout<<max(suml,sumr)<<endl;
}

