#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int min = i;
        for (int j = i + 1; j < arr.size(); j++)
            if (arr[j] < arr[min])
                min = j;
        swap(arr[min], arr[i]);
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