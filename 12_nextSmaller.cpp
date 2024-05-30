#include <bits/stdc++.h>
using namespace std;
void traverse(vector<int> arr)
{
    cout << "ARRAY: ";
    for (auto i : arr)
        cout << i << " ";
    cout << endl;
}
void solve(vector<int> &arr)
{
    stack<int> stk;
    stk.push(-1);
    int n = arr.size();

    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (curr <= stk.top())
            stk.pop();

        arr[i] = stk.top();
        stk.push(curr);
    }
}
int main()
{
    vector<int> arr = {9, 7, 2, 4, 1, 3, 2, 2, 5, 7};
    traverse(arr);
    solve(arr);
    traverse(arr);
    return 0;
}