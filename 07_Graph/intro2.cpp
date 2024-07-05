#include <bits/stdc++.h>
using namespace std;

void print(vector<vector<int>> graph)
{
    for (auto i : graph)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
}
void solve(vector<vector<int>> graph, int start, vector<bool> &vis)
{
    vis[start] = 1;
    cout << start << " ";
    for (auto i : graph[start])
    {
        if (!vis[i] && graph[start][i])
            solve(graph, i, vis);
    }
}
void dfs(vector<vector<int>> graph)
{
    vector<int> ans;
    vector<bool> vis(graph.size(), 0);
    for (int i = 0; i < graph.size(); i++)
        if (!vis[i])
            solve(graph, i, vis);
    cout << endl;
}

int main()
{
    int n;
    int m;
    cin >> n >> m;

    vector<vector<int>> graph(n, vector<int>(m, 0));
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }
    print(graph);
    dfs(graph);
    return 0;
}