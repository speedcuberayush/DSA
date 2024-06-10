#include <iostream>
#include <vector>
using namespace std;

void print(const vector<vector<int>> &arr, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    int m, n, edges;
    cin >> m >> n >> edges;

    // Initialize a 2D vector with zeros
    vector<vector<int>> arr(m, vector<int>(n, 0));

    // Read edges and set values in the array
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        if (u < m && v < n)
        { // Check bounds to avoid out-of-range access
            arr[u][v] = 1;
            arr[v][u] = 1; // If it's an undirected graph
        }
    }

    // Print the array
    print(arr, m, n);
    return 0;
}
