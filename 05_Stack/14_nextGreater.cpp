#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &arr)
{
    stack<int> stk;
    int n = arr.size();
    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (!stk.empty() && stk.top() <= curr)
            stk.pop();

        arr[i] = (!stk.empty()) ? stk.top() : -1;
        stk.push(curr);
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
    vector<int> arr = {9, 7, 2, 4, 1};
    display(arr);
    solve(arr);
    display(arr);
    return 0;
}