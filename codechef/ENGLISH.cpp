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
        ll n;
        cin>>n;
        vector<string> s;
        for (ll i = 0; i < n; ++i) {
            string tmp;
            cin>>tmp;
            s.push_back(tmp);
        }
        ll gsum=0;
        for(auto itr=s.begin();itr!=s.end() && s.size()>1; ){
            vector<string>::iterator id;
            ll sum=0;
            for(auto j=itr;j!=s.end();j++){
                ll k=0;
                if(j==itr){
                    continue;
                }
                while(k<min((*j).size()-1,(*itr).size())/2 +1){
                    if((*j)[k]!=(*itr)[k]){
                        break;
                    }
                    k++;
                }
                if(k>sum){
                    sum=k;
                    id=j;
                }
                if(sum==0){
                    id=j;
                }
            }
            if(!s.empty()){
                s.erase(id);
                if(!s.empty())
                s.erase(itr);
            }

            gsum+=pow(sum,2);
            sum=0;
        }
        cout<<gsum<<endl;
    }
}