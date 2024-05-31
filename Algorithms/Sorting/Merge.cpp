#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int s, int e)
{
    int main = s;
    int mid = (s + e) / 2;
    vector<int> first, second;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    for (int i = 0; i < len1; i++)
        first.push_back(arr[main++]);
    for (int i = 0; i < len2; i++)
        second.push_back(arr[main++]);

    int index1 = 0, index2 = 0;
    main = s;
    while (index1 < len1 && index2 < len2)
        arr[main++] = (first[index1] > second[index2]) ? second[index2++] : first[index1];
    while (index1 < len1)
        arr[main++] = first[index1++];
    while (index2 < len2)
        arr[main++] = second[index2++];
}

void solve(vector<int> &arr, int s, int e)
{
    if (s >= e)
        return;

    int mid = (s + e) / 2;
    solve(arr, s, mid);
    solve(arr, mid + 1, e);
    merge(arr, s, e);
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