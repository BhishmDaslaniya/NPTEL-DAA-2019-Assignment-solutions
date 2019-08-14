#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void Solve(vector< ll > v[],ll n[]){
    vector<ll> Merged;
    ll candidate = 0;
    //Merge all vectors!!!
    for (ll i = 0; i < 5; i++)
    {
        for (ll j = 0; j < n[i]; j++)
        {
            Merged.push_back(v[i][j]);
        }
    }
    // Sort that merged vector !!! Yeah got it!!
    sort(Merged.begin(),Merged.end());

    // Generate frequency array and count the elected candidates in counCil.
    // If there is Amit shah in Council then no one gets loss!!!

    ll freq[Merged.size()] = {0};
    freq[0] = 1;
    for(ll i = 1 ; i < Merged.size();i++){
        if(Merged[i-1] ==  Merged[i] ){
            freq[i] = freq[i-1]+1;
            if(freq[i]==3){
                candidate++;
            }
        }else{
            freq[i] = 1;
        }
    }

    // cout<<"================================================"<<endl;
    // for(ll i = 0 ; i < Merged.size();i++){
    //     cout<<freq[i]<<" ";
    // }

    cout<<candidate<<endl;
}


int main(){
    ll n[5];
    for(ll i = 0 ; i < 5 ; i++){
        cin>>n[i];
    }
    ll temp;
    vector< ll > v[5];
    for(ll i = 0 ; i < 5 ; i++){
        for(ll j = 0 ; j < n[i] ; j++){
            cin>>temp;
            v[i].push_back(temp);
        }
    }
    
    //sort all the vectors!!!
    for(ll i = 0 ; i < 5 ;i++){
        sort(v[i].begin(), v[i].end());
    }

    // Lets get answer!!! 
    // How????? 
    // Idk! Let's try!
    Solve(v , n);

    return 0;
}