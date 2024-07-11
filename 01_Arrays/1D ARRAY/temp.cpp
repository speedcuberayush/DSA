#include <bits/stdc++.h>
using namespace std;

void print(const vector<int> &arr)
{
    for (auto it : arr)
        cout << it << " ";
    cout << endl;
}
void solve(vector<int> &arr)
{
    int i = 0;
    int j = 1;
    while (j < arr.size())
    {
        while (arr[i] != 0)
            i++;
        while (arr[j] == 0)
            j++;
        if (arr[i] == 0 && arr[j] != 0)
            swap(arr[i++], arr[j++]);
    }
}

int main()
{
    vector<int> arr = {1, 2, 0, 1, 1, 1, 0, 1, 0, 2, 0};
    int n = arr.size();

    cout << "ORIGINIAL: ";
    print(arr);
    solve(arr);
    print(arr);

    return 0;
}
