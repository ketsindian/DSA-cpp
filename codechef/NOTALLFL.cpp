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
        ll n,k;
        cin>>n>>k;
        VLL a;
        for(ll i=0;i<n;i++){
            ll tmp;
            cin>>tmp;
            a.push_back(tmp);
        }
        ll fcnt=0;

        for(ll i=0;i<n;i++){
            ll cnt=0;
            SLL s;
            for(ll j=i;j<n;j++){
                if(s.empty()){
                    s.insert(a[j]);
                    cnt++;
                }else if(s.size()==1 && s.count(a[j])){
                    cnt++;
                }else{
                    if(fcnt<cnt){
                        fcnt=cnt;
                    }
                    break;
                }
                if(fcnt<cnt){
                    fcnt=cnt;
                }
            }
        }
        cout<<fcnt<<endl;
    }
}