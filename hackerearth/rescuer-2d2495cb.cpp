    #include <bits/stdc++.h>
    #define ll float
    #define lim 11000000
    using namespace std;

    int main (){
        setprecision(5);
        ll x1,x2,y1,y2,v1,v2,m,c;
        ll result,t;
        cin>>t;
        while(t--){
            cin>>x1>>y1>>x2>>y2>>v1>>v2;
            if(x1 != x2){
                if(y1<0){
                    m=abs(y1-y2)/abs(x1-x2);
                    c=y1-m*x1;
                    result=sqrt(pow((y1),2)/pow((x1-c),2))/v1+sqrt(pow((y2),2)/pow((x2-c),2))/v2;
                }
                else{
                    result=sqrt(pow((y1-y2),2)+pow((x1-x2),2))/v2;
                }
            }
            else{
                if(y1<0){
                    result=0-y1/v1+y2/v2;
                }
                else{
                    result=y2-y1/v2;
                }
    //        result=(y1-y2)/v2;
            }
    //        cout<<setprecision(5);
            cout<<fixed<<setprecision(5)<<result<<endl;
        }

    }
