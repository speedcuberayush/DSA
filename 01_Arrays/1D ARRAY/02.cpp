#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> arr)
{
    int first = INT_MIN;
    int second = INT_MIN;
    for (auto it : arr)
    {
        if (it > first)
        {
            second = first;
            first = it;
        }
        else if (it < first && it > second)
            second = it;
    }
    return second;
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
    cout << secondLargest(arr);
    return 0;
}