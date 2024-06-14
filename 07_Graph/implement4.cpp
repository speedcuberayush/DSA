#include <bits/stdc++.h>
using namespace std;
void print(int arr[4][4], int m, int n)
{
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
            if (arr[i][j] == 1)
                cout << i << "-" << j << " ";
        cout << endl;
    }
}
int main()
{
    int m = 3, n = 3;
    int graph[4][4] = {{1, 0, 1}, {0, 1, 0}, {1, 1, 0}};
    print(graph, m, n);

    return 0;
}