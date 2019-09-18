#include<bits/stdc++.h>
using namespace std;
typedef long int ll;

int main(){
    ll m,n;
    cin>>m>>n;   
    ll r[m][n];
    ll d[m][n];
    ll jumps[m][n] ;

    //Take right shift values!!!
    for(ll i = 0 ; i < m ; i++){
        for(ll j = 0 ; j < n; j++){
            cin>>r[i][j];
            jumps[i][j] = 10000000009;
        }
    }
    //Take down shift values!!!
    for(ll i = 0 ; i < m ; i++){
        for(ll j = 0 ; j < n; j++){
            cin>>d[i][j];
        }
    }

    // print pairs debugging?

    // cout<<"Input : "<<endl;
    // for(ll i = 0 ; i < m ; i++){
    //     for(ll j = 0 ; j < n; j++){
    //         cout<<"("<<r[i][j]<<","<<d[i][j]<<")"<<" ";
    //     }
    //     cout<<endl;    
    // }

    // create jumps matrix with minimum jumps to reach particular cell
    jumps[0][0] = 0;
    for(ll i = 0 ; i < m ; i++){
        for(ll j = 0 ; j < n ;j++){
            for(ll a = i+1,b = 0 ; b < d[i][j] && a < m ; a++,b++){
                jumps[a][j] = min(jumps[a][j] , jumps[i][j]+1);
            }
            for(ll a = j+1,b = 0 ; b < r[i][j] && a < n ; a++,b++){
                jumps[i][a] = min(jumps[i][a] , jumps[i][j]+1);
            }
        }
    }
    cout<<jumps[m-1][n-1]<<"\n";
}