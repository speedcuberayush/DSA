#include <bits/stdc++.h>
using namespace std;
void print(vector<vector<int>> graph)
{
    for (int i = 0; i < graph.size(); i++)
    {
        for (int j = 0; j < graph[i].size(); j++)
            cout << graph[i][j] << " ";
        cout << endl;
    }
}
void solve(vector<vector<int>> graph, int node, vector<int> &visited)
{
    visited[node] = 1;
    cout << node << " ";
    for (auto it : graph[node])
        if (!visited[it])
            solve(graph, it, visited);
}

void dfs(vector<vector<int>> graph, int start)
{
    vector<int> visited(graph.size() + 1, 0);
    solve(graph, start, visited);
    cout << endl;
}
void bfs(vector<vector<int>> graph, int start)
{
    vector<int> visited(graph.size() + 1, 0);
    queue<int> q;
    q.push(start);
    visited[start] = 1;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << " ";
        for (auto it : graph[node])
            if (!visited[it])
            {
                visited[it] = 1;
                q.push(it);
            }
    }
    cout << endl;
}
int main()
{
    int row;
    int col;
    cin >> row >> col;
    vector<vector<int>> graph(col + 1);
    for (int i = 0; i < col; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    print(graph);
    dfs(graph, 1);
    bfs(graph, 1);
    return 0;
}

/*
6 7
1 2
2 3
2 4
3 5
4 5
4 6
5 6
*/