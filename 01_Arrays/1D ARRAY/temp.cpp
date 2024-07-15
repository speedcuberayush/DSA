#include <bits/stdc++.h>
using namespace std;
void print(vector<int> arr)
{
    for (auto it : arr)
        cout << it << " ";
    cout << endl;
}

void sort(vector<int> &arr, int s, int e)
{
    if (s < e)
    {
        int i = s - 1;
        for (int j = s; j < e; j++)
            if (arr[j] < arr[e])
                swap(arr[++i], arr[j]);

        swap(arr[++i], arr[e]);
        sort(arr, s, i - 1);
        sort(arr, i + 1, e);
    }
}

int main()
{
    vector<int> arr = {9, 7, 2, 4, 1, 3, 2, 2, 5, 7};
    int n = arr.size();
    print(arr);
    sort(arr, 0, n - 1);
    print(arr);
    return 0;
}