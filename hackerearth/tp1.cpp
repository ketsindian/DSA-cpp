#include <bits/stdc++.h>
using namespace std;

string dividingChocolate(vector<int>& chocolates){
    int count_1=0;
    int count_2=0;
    for(auto i=chocolates.begin();i!=chocolates.end();i++){
        if(*i==100){
            count_1++;
        }
        else {
            count_2++;
        }
    }
    cout<<count_1<<" "<<count_2;
}


int main(){
    int tests;
    cin >> tests;
    for (int test = 0; test < tests; test++)
    {
        int n;
        cin >> n;
        vector<int> chocolates(n);
        for (int i = 0; i < n; i++)
        {
            cin >> chocolates[i];
        }
        string result = dividingChocolate(chocolates);
        cout << result << endl;
    }
}