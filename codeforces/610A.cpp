#include <bits/stdc++.h>
#define ll int
#define lim 11000000
using namespace std;

int main(){
    ll t,a,b,c,r;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>r;
//        cout<<abs(b-a);

        ll min=a<b?a:b;
        ll max=min==a?b:a;
        ll res=max-min+1;
//        for(ll i=c-r;i<=c+r;i++){
//            if(i>=min&&i<=max){
//                res--;
//            }
//        }
        if(c-r>=min && c+r<=max){
            res=res-2*r-1;
        }else if(min>c-r && max<c+r){
            res=0;
        }
        else if(c-r>=min && c-r<=max && c+r>=max){
            res=res-(max-c+r)-1;
        }else if(c+r<=max && c+r>=min && min>=c-r){
            res=res-(c+r-min)-1;
        }
        res=res==max-min+1?max-min:res;
        cout<<res<<endl;
    }
}