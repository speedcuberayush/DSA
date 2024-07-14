#include <bits/stdc++.h>
using namespace std;
void print(vector<int> &arr)
{
    for (auto it : arr)
        cout << it << " ";
    cout << endl;
}
void solve(vector<int> &arr)
{
    int zero = 0;
    int one = 0;
    int two = arr.size() - 1;
    while (one <= two)
    {
        if (arr[one] == 0)
            swap(arr[zero++], arr[one++]);
        else if (arr[one] == 1)
            one++;
        else
            swap(arr[one], arr[two--]);
    }
}
int main()
{
    vector<int> arr = {1, 1, 1, 2, 2, 2, 2, 0, 1, 2, 0, 0, 0, 2, 2, 2, 1};
    int n = arr.size();
    print(arr);
    solve(arr);
    print(arr);
    return 0;
}