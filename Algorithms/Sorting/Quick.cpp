#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &arr, int s, int e)
{
    if (s > e)
        return;
    int i = s - 1;
    for (int j = s; j < e; j++)
        if (arr[j] < arr[e])
            swap(arr[j], arr[++i]);
    swap(arr[++i], arr[e]);

    solve(arr, s, i - 1);
    solve(arr, i + 1, e);
}
void traverse(vector<int> arr)
{
    cout << "ARRAY: ";
    for (auto i : arr)
        cout << i << " ";
    cout << endl;
}
int main()
{
    vector<int> arr = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    cout << "BEFORE ";
    traverse(arr);
    solve(arr, 0, arr.size() - 1);
    cout << "AFTER ";
    traverse(arr);

    return 0;
}