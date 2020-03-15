#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v;
        ll cnt=n;
        while(n--) {
            ll tmp;
            cin>>tmp;
            v.push_back(tmp);
        }
        bool flaga=true;
        bool res=true;
        bool flagd=false;


        auto itf=v.begin();
        auto itr=v.end();

        while(0 != cnt && itf!=itr){
            if(*itf<=*(itf+1)){
                itf++;
                cnt--;
            }
            if(*itr<=*(itr-1)){
                itr--;
                cnt--;
            }
        }
//        itr=itr+1;
//        while(itr!=v.end()){
//            if(flaga && *(itr-1)<=*itr){
//                itr++;
//            }
//            if(flaga && *(itr-1)>*itr){
//                flagd=true;
//                flaga=false;
//            }
//            if(flagd && flaga){
//                res=false;
//                break;
//            }
//            if(flagd && !flaga &&*(itr-1)<*itr){
//                res=false;
//                break;
//            }
//            if(flagd && !flaga &&*(itr-1)>=*itr){
//                itr++;
//            }
//        }
        if(cnt==0 && itf==itr){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}
