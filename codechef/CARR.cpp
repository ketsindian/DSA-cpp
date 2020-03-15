#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> VLL;
typedef set<ll> SLL;
typedef pair<ll, ll> PLL;
#define lim 10000007
#define mod 1000000007

int main (){
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll sum=pow(m,n);
        if(n-2>0){
            if(m>n)
                sum-=(n-2)*(n-1)*m/2;
            else{
                if(n-m-2>0){
                    sum-=((n-m-2)*(n-m-1)*m/2)*((n-2)*(n-1)*m/2);
                }else{
                    sum-=(n-2)*(n-1)*m/2;
                }
            }

        }
        cout<<sum%(mod)<<endl;
    }
}