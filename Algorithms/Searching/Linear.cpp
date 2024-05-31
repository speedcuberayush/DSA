#include <bits/stdc++.h>
using namespace std;

void traverse(vector<int> arr)
{
    cout << "ARRAY: ";
    for (auto i : arr)
        cout << i << " ";
    cout << endl;
}
int result(vector<int> arr, int e)
{
    for (int i = 0; i < arr.size(); i++)
        if (arr[i] == e)
            return i;
    return -1;
}
int main()
{
    vector<int> arr;
    for (int i = 1; i <= 10; i++)
        arr.push_back(i);

    for (int i = 0; i <= 5; i++)
    {
        int e = 2 * i + 1;
        traverse(arr);
        int ans = result(arr, e);
        cout << "ELEMENT " << e << ((ans != -1) ? " FOUND AT INDEX " + to_string(ans) : " NOT FOUND") << endl;
    }
    return 0;
}