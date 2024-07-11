#include <bits/stdc++.h>
using namespace std;

void print(const vector<int> &arr)
{
    for (auto it : arr)
        cout << it << " ";
    cout << endl;
}
bool search(vector<int> &arr, int target)
{
    for (auto it : arr)
        if (it == target)
            return 1;
    return 0;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = arr.size();

    cout << "ORIGINIAL: ";
    print(arr);
    for (int i = 0; i < 10; i++)
        cout << (search(arr, i) ? "FOUND " : "NOT FOUND") << endl;

    return 0;
}
