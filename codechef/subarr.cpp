# include<bits/stdc++.h>
# define ll long long int
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<int> v;
        while(n--){
            ll tmp;
            cin>>tmp;
            v.push_back(tmp);
        }
        ll count=0;
        ll result=0;
        auto itr=v.begin();
        while(itr!=v.end()){
            count++;
            if(*itr>*(itr+1)){
                result+=count*(count+1)/2;
                count=0;
            }
            itr++;
        }
//        count++;
        result+=count*(count+1)/2;
        cout<<result<<endl;
    }
    return 0;
}