#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> VLL;
typedef set<ll> SLL;
typedef pair<ll, ll> PLL;
typedef map<ll ,ll> MLL;
int n,m,T;
#define lim 10000007
#define mod 1000000007

int main (){
    ll t;
    cin>>t;
    while(t--){
        cin>>n>>m>>T;
        int a[n][m];
        int d[n][m];
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin>>a[i][j];
            }
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin>>d[i][j];
            }
        }



    }
}

bool solveMazeUtil(int maze[n][m], int x, int y,int d[n][m]){
    if (x == n - 1 && y == m - 1) {
        return true;
    }

    if (isSafe(d, x, y) == true) {

        if (solveMazeUtil(maze, x + 1, y, sol))
            return true;

        if (solveMazeUtil(maze, x, y + 1, sol))
            return true;

        sol[x][y] = 0;
        return false;
    }

    return false;
}

bool isSafe(){

}