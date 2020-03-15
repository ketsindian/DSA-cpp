#include <bits/stdc++.h>
#define ll long long int

using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        list<int> l;
        for(char c:s){
            l.push_back((int)c-48);
        }
        while(l.front()!=1 && !l.empty()){
            l.pop_front();
        }
        while(l.back()!=1 && !l.empty()){
            l.pop_back();
        }
//        ll x=count(l.begin(),l.end(),1);
        ll y=count(l.begin(),l.end(),0);
        if(y==0 && !l.empty()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}