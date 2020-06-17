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
        ll a[n],p[n],s[n];
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
        s[n-1]=a[n-1];
        p[0]=a[0];
        for (int i = 1; i < n; ++i) {
            p[i]=p[i-1]+a[i];
        }
        for (int i = n-2; i>-1; --i) {
            s[i]=s[i+1]+a[i];
        }
        ll min=LONG_LONG_MAX;
        ll sum=0;
        ll index=0;
        for (int j = 0; j <n ; ++j) {
            sum=p[j]+s[j];
            if (sum<min){
                index=j;
                min=sum;
            }
        }
        cout<<index+1<<endl;
    }
}