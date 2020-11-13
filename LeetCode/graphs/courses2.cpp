//This is the helper function for cycle . The algorithm used is 3 color algorithm or something like that
bool dfsutil(int v, vector<int> &vi, vector<vector<int>> &adj)
{

    if (vi[v] == 1)
        return true;
    if (vi[v] == 2)
        return false;
    vi[v] = 1;
    for (int i = 0; i < adj[v].size(); i++)

    {
        if (dfsutil(adj[v][i], vi, adj))
            return true;
    }
    vi[v] = 2;
    return false;
}
//Cycle detection
bool cycle(int n, vector<vector<int>> &adj)
{
    vector<int> vi(n, 0);
    for (int i = 0; i < n; i++)
    {

        if (dfsutil(i, vi, adj))
            return true;
    }

    return false;
}
//helper function for trversing the course graph when no cycle is detected....the algorithm used is topological sort. Since it works only of Directed
//acyclic graphs thats why we need to check for cycle first
void dfs(stack<int> &s, int v, vector<vector<int>> &adj, vector<int> &vis)
{
    vis[v] = 1;
    for (int i = 0; i < adj[v].size(); i++)
    {
        if (vis[adj[v][i]] == 0)
            dfs(s, adj[v][i], adj, vis);
    }
    s.push(v);
    return;
}
//the sweet fruit of all functions above
class Solution
{
public:
    vector<int> findOrder(int n, vector<vector<int>> &p)
    {

        vector<vector<int>> adj(n);

        for (int i = 0; i < p.size(); i++)
        {
            adj[p[i][1]].push_back(p[i][0]);
        }
        if (cycle(n, adj))
            return {};
        vector<int> vis(n, 0);
        vector<int> ans;
        stack<int> s;
        for (int i = 0; i < n; i++)
        {
            if (vis[i] == 0)
                dfs(s, i, adj, vis);
        }
        while (!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }
};