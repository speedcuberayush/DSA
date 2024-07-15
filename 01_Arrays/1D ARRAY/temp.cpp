#include <bits/stdc++.h>
using namespace std;
void print(vector<int> arr)
{
    for (int it : arr)
        cout << it << " ";
    cout << endl;
}
void recbubble(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n - i; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}
int main()
{
    vector<int> arr = {9, 7, 2, 4, 1, 3, 2, 2, 4, 7};
    int n = arr.size();
    recbubble(arr, n);
    print(arr);
    return 0;
}