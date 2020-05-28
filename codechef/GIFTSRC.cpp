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
    ll n=lim,m=lim;
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string mv;
        cin>>mv;
        ll i=0,j=0;
        bool flag=true;
        char last='Z';
        for(char m:mv){
             if(m=='L'){
                 if(last=='L' || last=='R'){
                     last='L';
                     continue;
                 }
               i--;
                 last='L';
             }else if(m=='R'){
                 if(last=='L' || last=='R'){
                     last='R';
                     continue;
                 }
                 i++;
                 last='R';
             }else if(m=='U'){
                 if(last=='U' || last=='D'){
                     last='U';
                     continue;
                 }
                 j++;
                 last='U';
             }else if(m=='D'){
                 if(last=='U' || last=='D'){
                     last='D';
                     continue;
                 }
                 j--;
                 last='D';
             }
        }
        cout<<i<<' '<<j<<endl;
    }
}
