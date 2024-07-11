#include <bits/stdc++.h>
using namespace std;

void print(const vector<int> &arr)
{
    for (auto it : arr)
        cout << it << " ";
    cout << endl;
}

// approach 1
void leftRotate(vector<int> &arr, int n, int d)
{
    vector<int> temp(d);
    for (int i = 0; i < d; i++)
        temp[i] = arr[i];

    for (int i = d; i < n; i++)
        arr[i - d] = arr[i];

    for (int i = 0; i < d; i++)
        arr[n - d + i] = temp[i];
}

void rightRotate(vector<int> &arr, int n, int d)
{
    vector<int> temp(d);
    for (int i = 0; i < d; i++)
        temp[i] = arr[n - d + i];

    for (int i = n - d - 1; i >= 0; i--)
        arr[i + d] = arr[i];

    for (int i = 0; i < d; i++)
        arr[i] = temp[i];
}

// approach 2
void shortLeftRotate(vector<int> &arr, int n, int d)
{
    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());
    reverse(arr.begin(), arr.end());
}
void shortRightRotate(vector<int> &arr, int n, int d)
{
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int n = arr.size();
    int d = 3;
    cout << "ORIGINIAL: ";
    print(arr);
    // method 1
    leftRotate(arr, n, d);
    print(arr);
    rightRotate(arr, n, d);
    print(arr);

    // method 2
    shortLeftRotate(arr, n, d);
    print(arr);
    shortRightRotate(arr, n, d);
    print(arr);
    return 0;
}
