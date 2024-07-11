#include <bits/stdc++.h>
using namespace std;
void print(vector<int> arr)
{
    for (auto it : arr)
        cout << it << " ";
    cout << endl;
}

// recursive
bool isSort(vector<int> arr, int s, int n)
{
    if (n == 1 || n == 0)
        return true;
    if (arr[s] > arr[s + 1])
        return false;
    return isSort(arr, s + 1, n - 1);
}
// iterative
bool isSort(vector<int> arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
        if (arr[i] > arr[i + 1])
            return false;
    return true;
}
int main()
{
    // vector<int> arr = {9, 7, 2, 4, 1};
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int n = arr.size();
    print(arr);
    cout << (isSort(arr) ? "SORTED" : "NOT SORTED") << endl;
    cout << (isSort(arr, 0, n) ? "SORTED" : "NOT SORTED") << endl;
    return 0;
}