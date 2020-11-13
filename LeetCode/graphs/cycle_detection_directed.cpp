#include <iostream>
#include <vector>
using namespace std;
bool dfsutil(int v, vector<int> &vis, vector<vector<int>> &adj)
{
    if (vis[v] == 1)
        return true;
    if (vis[v] == 2)
        return false;

    vis[v] = 1;
    for (int i = 0; i < adj[v].size(); i++)
    {
        return dfsutil(adj[v][i], vis, adj);
    }
    vis[v] = 2;
    return false;
}
bool dfs(int n, vector<vector<int>> &adj)
{
    vector<int> vis(n, 0);
    for (int i = 0; i < n; i++)

        if (dfsutil(i, vis, adj))
            return true;

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
        adj[b].push_back(a);
        // adj[b-1].push_back(a-1);
    }
    if (dfs(n, adj))
        cout << "yes";
    else
    {
        cout << "NO";
    }
}