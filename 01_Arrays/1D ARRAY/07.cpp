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
    int j = -1;
    for (int i = 0; i < arr.size(); i++)
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    if (j == -1)
        return;
    for (int i = j + 1; i < arr.size(); i++)
        if (arr[i] != 0)
            swap(arr[j++], arr[i]);
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
