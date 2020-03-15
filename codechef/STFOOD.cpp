#include <bits/stdc++.h>
using namespace std;
//typedef int int;
typedef vector<int> Vint;
typedef set<int> Sint;
typedef pair<int, int> Pint;

int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s[n];
        int v[n];
        int p[n];
        int i,j;
        while( j = 0; j <n; j++){
            int tmp;
            cin>>tmp;
            s[i]=tmp;
        }
        while( i=0;i<n;i++){
            int tmp;
            cin>>tmp;
            v[i]=tmp;
        }
        while(int i=0;i<n;i++){
            int tmp;
            cin>>tmp;
            p[i]=tmp;
        }
        int max=-1;
        while(int i=0;i<n;i++){
            int sum=p[i]%s[i]==0?p[i]/s[i]:p[i]/s[i]+1;
            if(sum *v[i]>max){
                max=sum*v[i];
            }
        }
        cout<<max;
    }

}