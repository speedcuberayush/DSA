#include <bits/stdc++.h>
using namespace std;
void print(vector<int> &arr)
{
    for (auto it : arr)
        cout << it << " ";
    cout << endl;
}
int max1s(vector<int> &arr)
{
    int ans = 0;
    int count = 0;
    for (auto it : arr)
    {
        if (it == 1)
            count++;
        else
        {
            ans = max(ans, count);
            count = 0;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1};
    int n = arr.size();
    print(arr);
    cout << "MAX 1 count: " << max1s(arr);
    return 0;
}