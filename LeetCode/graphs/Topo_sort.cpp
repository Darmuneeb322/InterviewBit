#include <iostream>
#include <vector>
#include<stack>
using namespace std;
void dfs(stack<int> &s,int v,vector<vector < int > > &adj,vector< int >&vis)
{
   vis[v]=1;
    for(int i=0;i<adj[v].size();i++)
    {
        if(vis[adj[v][i]]==0)
        dfs(s,adj[v][i],adj,vis);

    }
    s.push(v);
return;

}
vector<int>  topo(vector< vector < int > > &adj,int n)
{
    vector< int > vis(n,0);
    vector< int > ans;
    stack<int>s;
    for(int i=0;i<n;i++)
    {
        if(vis[i]==0)
         dfs(s,i,adj,vis);

    }
    while(!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}
int main()
{
    int m;
    int n;

    cout << "Enter number of edges follwed by number of nodes" << endl;
    cin >> m >> n;
    vector< vector< int > > adj(n);
    int a, b;
    while (m--)
    {
        cin >> a >> b;
        adj[a].push_back(b);
    }
    vector<int> ans=topo(adj,n);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    
}
