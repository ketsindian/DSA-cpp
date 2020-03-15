    #include<bits/stdc++.h>
    using namespace std;

    int main () {
        int t;
        cin>>t;
        while(t--){
            string S;
            cin>>S;
            int bal=0;
            int i=0;
            int ans=0;
            cout<<"hello";
            cout<<S.size();
            while(i<S.size()){
                if(S[i]=='{'){
                    bal++;
                    i++;
                    continue;
                }
                else if(S[i]=='}'){
                    if(S[i+1]=='}'){
                        if(bal>0){
                            bal--;
                        }else{
                            ans++;
                        }
                        i++;
                        i++;
                        continue;
                    }else {
                        if(bal>0){
                            ans++;
                            bal--;
                        }
                        else{
                            ans++;
                            ans++;
                        }
                        i++;
                        continue;
                    }
                }

            }
            ans=bal>0?ans+bal*2:ans;
            cout<<ans;
        }
        return 0;
    }