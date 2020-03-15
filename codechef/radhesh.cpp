#include <bits/stdc++.h>
#define  ll  long long int
using namespace std;

string buildString(int ch,int pos){
    string str;
    if(pos==1) {
        str.push_back(char(ch + 97));
        return str;
    }
    else{
        str.push_back((char)min(ch,25)+97);
        return str+buildString(ch -min(ch,25),pos-1);
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll ch=0;
        for(char c:s){
            ch+=(int)c-97;
        }
        string newStr=buildString(static_cast<int>(ch), s.length());
        reverse(newStr.begin(),newStr.end());
        if(s==newStr){
            auto itr=newStr.end();
            while((*itr)!='z' &&(*(itr-1)=='z') && itr!=newStr.begin()) --itr;
            *itr=(char)(((int)*itr)-1);
//            --itr;
//            *itr=(char)(((int)*itr)+1);
        }
        cout<<ch<<' '<<newStr<<endl;
    }
//    cout<<(int)'a';
    return 0;
}

