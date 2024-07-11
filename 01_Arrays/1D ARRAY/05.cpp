#include <bits/stdc++.h>
using namespace std;
void print(vector<int> arr)
{
    for (auto it : arr)
        cout << it << " ";
    cout << endl;
}

void leftRotate(vector<int> &arr, int n)
{
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
    arr[n - 1] = temp;
}

void rightRotate(vector<int> &arr, int n)
{
    int temp = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
        arr[i + 1] = arr[i];
    arr[0] = temp;
}

int main()
{
    // vector<int> arr = {9, 7, 2, 4, 1};
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int n = arr.size();
    print(arr);
    leftRotate(arr, n);
    print(arr);
    rightRotate(arr, n);
    print(arr);
    return 0;
}