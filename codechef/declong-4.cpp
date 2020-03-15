#include <bits/stdc++.h>

#define ll long long int
using namespace std;

int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll a,b;
        cin>>a;
        cin>>b;
        a=convertBinaryToDecimal(a);
        b=convertBinaryToDecimal(b);
        ll cnt=0;
        while(b){
//            cout<<a<<" "<<b<<endl;
            ll u=a ^ b;
            ll v=a & b;
            a=(int)u;
            b=(int)v*2;
//            cout << a<<" "<<b<<endl;
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
