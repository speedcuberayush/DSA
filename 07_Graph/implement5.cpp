#include <bits/stdc++.h>
using namespace std;
void print(vector<vector<int>> graph)
{
    for (int i = 0; i < graph.size(); i++)
    {
        cout << i << " : ";
        for (auto it : graph[i])
            cout << it << " ";
        cout << endl;
    }
}
int main()
{
    int m, n;
    cout << "nodes: ";
    cin >> m;
    cout << "edges: ";
    cin >> n;
    vector<vector<int>> graph(n + 1);
    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    print(graph);

    return 0;
}