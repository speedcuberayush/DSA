#include <bits/stdc++.h>
using namespace std;

void print(const vector<int> &arr)
{
    for (auto it : arr)
        cout << it << " ";
    cout << endl;
}

vector<int> solve(vector<int> arr)
{
    int i = -1;
    vector<int> ans;
    for (auto it : arr)
    {
        if (i == -1 || i != it)
        {
            i = it;
            ans.push_back(it);
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 3, 3, 4, 4, 5, 6, 6};
    int n = arr.size();
    cout << "ORIGINIAL: ";
    print(arr);
    print(solve(arr));

    return 0;
}
