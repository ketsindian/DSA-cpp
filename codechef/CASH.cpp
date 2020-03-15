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
        ll n,k;
        cin>>n>>k;
        ll a[n],f[n],b[n];
        for(ll i=0;i<n;i++){
            ll tmp;
            cin>>tmp;
            a[i]=tmp;
        }
        ll sum=0;
        for(ll i=0;i<n;i++){
            sum+=a[i]%k;
        }
        ll d=sum/k+1;
        for(ll i=0;i<n;i++){
            a[i]=a[i];
        }
        f[0]=a[0]%(d*k)?a[0]-(a[0]/(d*k))*(d/k):a[0];
        for(ll i=1;i<n;i++){
            f[i]=a[i]%(d*k)!=0?a[i]-(a[i]/(d*k))*(d/k)+f[i-1]:f[i-1];
        }
        b[n-1]=a[n-1]%(d*k)!=0?a[n-1]-((a[n-1]/(d*k))+1)*(d/k):a[n-1];
        for(ll i=n-2;i>-1;i--){
            b[i]=a[i]%(d*k)!=0?a[i]-((a[i]/(d*k))+1)*(d/k)+b[i+1]:a[i]+b[i+1];
        }
        ll min=LONG_LONG_MAX;
        ll ans=f[n-1];
        ll ind=0;
        for(ll i=0;i<n;i++){
            if(f[i]-b[i]<min && f[i]>=b[i]){
                min=f[i]-b[i];
                ind=i;
            }
        }
        ans=ind!=n-1?f[ind+1]-b[ind]:f[n-1];
        cout<<ans<<endl;
    }

}