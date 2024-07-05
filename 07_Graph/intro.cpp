#include <bits/stdc++.h>
using namespace std;
void print(vector<vector<int>> graph)
{
    for (auto i : graph)
    {
        for (auto it : i)
            cout << it << " ";
        cout << endl;
    }
}

void solve(vector<vector<int>> &graph, vector<bool> &vis, int start)
{
    cout << start << " ";
    vis[start] = 1;
    for (int i = 0; i < graph.size(); i++)
        for (auto it : graph[i])
            if (!vis[it])
            {
                vis[it] = 1;
                solve(graph, vis, it);
            }
}

void dfs(vector<vector<int>> graph)
{
    vector<bool> vis(graph.size() + 1, 0);
    for (int i = 0; i < graph.size(); i++)
    {
        if (!vis[i])
            solve(graph, vis, 0);
    }
    cout << endl;
}
void bfs(vector<vector<int>> graph)
{
    queue<int> q;
    vector<bool> vis(graph.size());
    q.push(0);
    vis[0] = 1;

    while (!q.empty())
    {
        int temp = q.front();
        cout << temp << " ";
        q.pop();
        // vis[temp] = 1;
        for (int i = 0; i < graph.size(); i++)
            for (auto it : graph[i])
                if (!vis[it])
                {
                    vis[it] = 1;
                    q.push(it);
                }
    }
    cout << endl;
}

int main()
{
    int n;
    int m;
    cin >> n >> m;
    vector<vector<int>> graph(n);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    // print(graph);
    dfs(graph);
    bfs(graph);

    return 0;
}

// 6 6
// 4 2
// 2 0
// 2 3
// 0 1
// 3 1
// 1 5