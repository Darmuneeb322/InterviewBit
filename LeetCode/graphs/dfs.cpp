#include<iostream>
#include<vector>
using namespace std;
void dfsutil(int v,vector<bool>&vis, vector<vector<int>>& adj)
{
    vis[v]=true;
    cout<<v<<" ";
    if(adj[v].size()>0)
    {for(int i=0;i<adj[v].size();i++)
    {
        if(!vis[adj[v][i]])
        dfsutil(adj[v][i],vis,adj);
    }}

}
void dfs(int n,vector<vector<int>> &adj)
{
    vector<bool>vis(n,false);
    dfsutil(0,vis,adj);

}
int main()
{
    int m;
    int n;
    
    cout<<"Enter number of edges follwed by number of nodes"<<endl;
    cin>>m>>n;
    vector<vector<int>> adj(n);
    int a,b;
    while(m--)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        // adj[b-1].push_back(a-1);
    }
    vector<int>ans;
    dfs(n,adj);
    
}