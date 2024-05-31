#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &arr)
{
    int i = 1;
    int j = 0;
    while (i < arr.size())
    {
        if (arr[i] == arr[j])
            i++;
        if (arr[i] != arr[j])
            j++;
    }
}
int main()
{
    vector<int> arr;

    return 0;
}