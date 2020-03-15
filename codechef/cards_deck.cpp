#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t,n,m;
    cin>>t;
    while(t--){
        int tmp;
        cin>>n;
        int n1=n;
        cin>>m;
        string s;
        list<int> r;
        list<int> g;
        list<int> e;
        while(n--){
            cin>>tmp;
            r.push_back(tmp);
        }
        while(n1--){
            cin>>tmp;
            g.push_back(tmp);
        }
        while(m--){
            cin>>tmp;
            e.push_back(tmp);
        }
        int rcount=0;
        int gcount=0;
        while(!r.empty()){
            if(r.front()>g.front()){
                rcount++;
                r.pop_front();
                g.pop_front();
                if(!e.empty()) {
                    r.push_back(e.front());
                    e.pop_front();
                    g.push_back(e.front());
                    e.pop_front();
                }
            }
            else {
                gcount++;
                r.pop_front();
                g.pop_front();
                if(!e.empty()){
                    g.push_back(e.front());
                    e.pop_front();
                    r.push_back(e.front());
                    e.pop_front();
                }
            }
        }

        if(rcount==gcount){
            cout<<"Tie"<<endl;
        }
        else if(rcount>gcount){
            cout<<"Radhesh wins"<<endl;
        }
        else{
            cout<<"Geethakoomaree wins"<<endl;
        }
    }
    return 0;
}
