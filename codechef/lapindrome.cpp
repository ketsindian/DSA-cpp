#include <bits/stdc++.h>

#define  ll  long long int
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {

        string s;
        cin >> s;
//        cout<<t<<s;
        map<char, ll> mpb;
        for (char c:s.substr(0, s.size() / 2)) {
            mpb[c]++;
        }

//        for (auto i:mp) {
//            cout << i.first << " " << i.second << endl;
//        }
//        cout << endl;

        int mid=s.size()%2==0?s.size()/2:s.size()/2+1;
        map<char, ll> mpa;
        for (char c:s.substr(mid, s.size())) {
            mpa[c]++;
        }

//        for(auto m:mpa){
//           cout<<m.first<<m.second<<endl;
//        }
//        cout<<"#########";
//        for(auto m:mpb){
//            cout<<m.first<<m.second<<endl;
//        }


        bool flag=true;
        for(int i=97;i<97+27;i++){
            if(mpa[(char) i] != mpb[(char) i]){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }
    return 0;
}


