#include <bits/stdc++.h>
using namespace std;
int largest(vector<int> arr)
{
    int ans = INT_MIN;
    for (auto it : arr)
        if (ans < it)
            ans = it;
    return ans;
}
void print(vector<int> arr)
{
    for (auto it : arr)
        cout << it << " ";
    cout << endl;
}
int main()
{
    vector<int> arr = {9, 7, 2, 4, 1};
    int n = arr.size();
    print(arr);
    cout << largest(arr);
    return 0;
}