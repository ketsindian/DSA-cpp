#include <bits/stdc++.h>
using namespace std;
typedef int ll;
typedef vector<ll> VLL;
typedef set<ll> SLL;
typedef pair<ll, ll> PLL;
#define lim 10000007
#define mod 1000000007

int main (){
    ll t;
    cin>>t;
    while(t--){
        ll s,w1,w2,w3;
        cin>>s>>w1>>w2>>w3;
        ll a[3];
        a[0]=w1;
        a[1]=w2;
        a[2]=w3;
        ll sum=0;
        ll cnt=0;
        ll i=0;
        while(i<3){
            while(sum+a[i]<=s){
                sum+=a[i];
                i++;
            }
            sum=0;
            cnt++;
        }
        cout<<cnt<<endl;
    }
}