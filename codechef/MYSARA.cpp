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
        ll a[n];
        for (ll i = 0; i <n ; ++i){
            cin>>a[i];
        }
        ll fcnt=1;
        bool imp=false;
        for(ll i=1;i<n;i++){
            std::string s1 = std::bitset< 64 >( a[i-1] ).to_string();
            std::string s2 = std::bitset< 64 >( a[i] ).to_string();
//            cout<<s1<<' '<<s2;
            ll cnt=0;
            for(ll j=0;j<s1.size();j++){
                if(s2[j]=='1' && s1[j]=='1'){
                    cnt++;
                }
                if(s2[j]=='0' && s1[j]=='1'){
                    imp=true;
                    break;
                }
            }
            if(imp){
                fcnt=0;
                break;
            }
            fcnt*=pow(2,cnt);
        }
        cout<<fcnt%mod<<endl;
    }
}