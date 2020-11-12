#include <iostream>
#include <vector>
using namespace std;
bool dfsutil(int v, vector<bool> &vis, vector<vector<int>> &adj,int parent)
{
    vis[v] = true;
        for (int i = 0; i < adj[v].size(); i++)
        {
            if (!vis[adj[v][i]])
                return dfsutil(adj[v][i], vis, adj,v);
            else if (adj[v][i] != parent)
                return true;
        }
        
}
bool dfs(int n, vector<vector<int>> &adj)
{
    vector<bool> vis(n, false);
    for(int i=0;i<n;i++)
    if(!vis[i])
    {
        if (dfsutil(i, vis, adj, -1))
            return true; 
    }
  

   return false;
}
int main()
{
    int m;
    int n;

    cout << "Enter number of edges follwed by number of nodes" << endl;
    cin >> m >> n;
    vector<vector<int>> adj(n);
    int a, b;
    while (m--)
    {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        // adj[b-1].push_back(a-1);
    }
    if(dfs(n, adj))
    cout<<"yes";
    else
    {
        cout<<"NO";
    }
    
    
}