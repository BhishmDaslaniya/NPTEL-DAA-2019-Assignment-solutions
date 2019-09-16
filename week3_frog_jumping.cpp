#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll m,n;
    cin>>m>>n;   
    ll r[m][n];
    ll d[m][n];

    for(ll i = 0 ; i < m ; i++){
        for(ll j = 0 ; j < n; j++){
            cin>>r[i][j];
        }
    }
    for(ll i = 0 ; i < m ; i++){
        for(ll j = 0 ; j < n; j++){
            cout<<r[i][j];
        }
    }
    for(ll i = 0 ; i < m ; i++){
        for(ll j = 0 ; j < n; j++){
            cout<<"("<<r[i][j]<<","<<d[i][j]<<")"<<" ";
        }
        cout<<endl;    
    }
    // cout<<"\nSuccess!!!"<<endl;
}