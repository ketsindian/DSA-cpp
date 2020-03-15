#include <bits/stdc++.h>
#define ll int
#define lim 11000000
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<pair<char,ll>> v;
        ll i=0;
        ll cnt=1;
        while(i<s.length()){
            if(s[i]==s[i+1]){
                cnt++;
                i++;
            }else{
                v.emplace_back(s[i],cnt);
                cnt=1;
                i++;
            }
        }
        string f="";
        for(auto itr=v.begin();itr!=v.end();itr++){
            f+=itr->first;
            f+=to_string(itr->second);
        }
//        cout<<f;
        if(f.length()<s.length()){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}