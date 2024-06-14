#include <bits/stdc++.h>
using namespace std;
void print(int arr[10][10], int m, int n)
{
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
            if (arr[i][j] == 1)
                cout << arr[i][j] << " ";
        cout << endl;
    }
}
int main()
{
    int n, m;
    cin >> m >> n;
    int graph[m + 1][n + 1];
    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    print(graph, m, n);

    return 0;
}