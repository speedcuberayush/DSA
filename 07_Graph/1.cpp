#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    bool valid(vector<vector<int>> &adj, int newX, int newY)
    {
        return (newX >= 0 && newY >= 0 && newX < adj.size() && newY < adj.size());
    }
    void dfs(vector<vector<int>> &adj, int s, int e, vector<vector<bool>> &vis)
    {
        int dx[4] = {-1, 0, 1, 0};
        int dy[4] = {0, 1, 0, -1};
        vis[s][e] = 1;
        for (int i = 0; i < 4; i++)
        {
            int newX = s + dx[i];
            int newY = e + dy[i];
            if (!vis[newX][newY] && valid(adj, newX, newY) && adj[newX][newY] == 1)
            {
                vis[newX][newY] = 1;
                dfs(adj, newX, newY, vis);
            }
        }
    }

public:
    int numProvinces(vector<vector<int>> adj, int V)
    {
        // code here
        int count = 0;
        vector<vector<bool>> vis(V + 1, vector<bool>(V + 1, 0));
        for (int i = 0; i < V + 1; i++)
        {
            for (int j = 0; j < V + 1; j++)
                if (!vis[i][j] && adj[i][j] == 1)
                {
                    count++;
                    dfs(adj, i, j, vis);
                }
        }

        return count;
    }
};