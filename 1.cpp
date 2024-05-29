#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nodes;
    cout << "no of nodes : ";
    cin >> nodes;
    cout << "no of edges : ";
    int edges;
    cin >> edges;
    vector<vector<int>> graph(edges);
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int i = 0; i < graph.size(); i++)
    {
        for (int j = 0; j < graph[i].size(); j++)
            cout << graph[i][j] << " ";
        cout << endl;
    }
    return 0;
}