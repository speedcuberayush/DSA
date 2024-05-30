#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &arr)
{
    stack<int> stk;
    stk.push(-1);
    int n = arr.size();
    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (stk.top() <= curr)
            stk.pop();
        arr[i] = stk.top();
    }
}
void display(vector<int> arr)
{
    cout << "ARRAY: ";
    for (auto i : arr)
        cout << i << " ";
    cout << endl;
}
int main()
{
    vector<int> arr = {1, 2, 4, 7, 9};
    display(arr);
    solve(arr);
    display(arr);
    return 0;
}