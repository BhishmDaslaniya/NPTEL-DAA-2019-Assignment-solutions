#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mem(n,m) memset(n,m,sizeof(n))


vector<int> graph[10005];
map< pair<int,int> ,int> mp;


int mn = INT_MAX;
int src,des;
string ans = "NO";
vector<int> visited(50005,0);
int vaule;
void dfs(int child,int parent){
     
     if(child == des){
         mn = min(mn,vaule);
         ans = "YES";
         return ;
     }
      

      for(auto it : graph[child]){
        if(it!=parent && !visited[it])
        {
            visited[child] = 1;
           vaule+=mp[{it,child}];
           dfs(it,child);
           vaule-=mp[{it,child}];
           visited[child] = 0;
           
        }
      }

      

}
 
int main(){
    ll m,a,b;
    cin>>m>>src>>des;
    ll x,y,z;
    
    vector<vector<ll>> arr(5001,vector<ll>(5001,INT_MAX));
    //mem(mat,INT_MAX);

    for(ll i = 0 ; i < m ; i++){
        cin>>x>>y>>z;
        graph[x].push_back(z);
        graph[z].push_back(x);
        mp[{x,z}] = y;
        mp[{z,x}] = y;

    }
    vector<int> visit(10005,0);
    dfs(src,-1);
    cout << ans << endl;
    if(ans=="YES")
    cout << mn << endl;
    
}