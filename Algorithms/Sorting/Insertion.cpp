#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
            arr[j + 1] = arr[j--];
        arr[j + 1] = key;
    }
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
    solve(arr);
    cout << "AFTER ";
    traverse(arr);

    return 0;
}