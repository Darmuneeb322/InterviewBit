#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> bfs(int n, vector<vector<int>> adj)
{
    vector<int> ans;
    vector<bool> vis(n, false);
    queue<int> q;
    q.push(0);
    while (!q.empty())
    {
        int v = q.front();
        if (!vis[v])
        {
            for (int i = 0; i < adj[v].size(); i++)
            {
                if (!vis[adj[v][i]])
                    q.push(adj[v][i]);
            }
            vis[v] = true;
            ans.push_back(v);
        }
        q.pop();
    }
    return ans;
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
    vector<int> ans = bfs(n, adj);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "   ";
    }
}