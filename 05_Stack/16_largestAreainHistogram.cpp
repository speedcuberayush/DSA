#include <bits/stdc++.h>
using namespace std;
void display(vector<int> arr)
{
    cout << "array: ";
    for (auto i : arr)
        cout << i << " ";
    cout << endl;
}
vector<int> nextSmaller(vector<int> height)
{
    vector<int> ans(height.size());
    stack<pair<int, int>> stk;
    int n = ans.size();
    stk.push({-1, -1});
    for (int i = n - 1; i >= 0; i--)
    {
        int current = height[i];
        while (current <= stk.top().first)
            stk.pop();
        ans[i] = stk.top().second;
        stk.push({current, i});
    }
    return ans;
}
vector<int> prevSmaller(vector<int> height)
{
    vector<int> ans(height.size());
    stack<pair<int, int>> stk;
    int n = ans.size();
    stk.push({-1, -1});
    for (int i = 0; i < n; i++)
    {
        int current = height[i];
        while (current <= stk.top().first)
            stk.pop();
        ans[i] = stk.top().second;
        stk.push({current, i});
    }
    return ans;
}
int largestArea(vector<int> &height)
{
    int n = height.size();
    vector<int> next, prev;
    next = nextSmaller(height);
    prev = prevSmaller(height);
    int maxArea = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int width = (next[i] - prev[i] - 1);
        if (next[i] == -1)
            next[i] = n;
        int curr = height[i] * width;
        maxArea = max(curr, maxArea);
    }

    return maxArea;
}
int main()
{
    vector<int> height = {2, 1, 5, 6, 2, 3};
    cout << largestArea(height);
    return 0;
}