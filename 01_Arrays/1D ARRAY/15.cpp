#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> solve1(vector<int> arr, int n, int sum)
{
    vector<pair<int, int>> ans;
    sort(arr.begin(), arr.end());
    int i = 0;
    int j = n - 1;
    vector<int> p;
    while (i < j)
    {
        if (arr[i] + arr[j] == sum)
            ans.push_back({arr[i++], arr[j++]});
        else if (arr[i] + arr[j] > sum)
            j--;
        else
            i++;
    }
    return ans;
}
vector<pair<int, int>> solve2(vector<int> arr, int n, int sum)
{
    vector<pair<int, int>> ans;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] + arr[j] == sum)
                ans.push_back({arr[i], arr[j]});

    return ans;
}
vector<pair<int, int>> solve3(vector<int> arr, int n, int sum)
{
    vector<pair<int, int>> ans;
    unordered_map<int, int> mpp;

    for (int i = 0; i < arr.size(); i++)
    {
        int diff = sum - arr[i];
        if (mpp.find(arr[i]) != mpp.end())
        {
            ans.push_back({arr[i], diff});
            mpp.erase(arr[i]);
        }
        else
            mpp[diff] = i;
    }

    return ans;
}

void print(vector<pair<int, int>> arr)
{
    for (auto i : arr)
        cout << i.first << " " << i.second << endl;
}
int main()
{
    vector<int> arr = {9, 7, 2, 4, 1, 3, 2, 2, 5, 7};
    int size = arr.size();
    int sum = 10;
    // vector<pair<int, int>> ans = solve1(arr, size, sum);
    // vector<pair<int, int>> ans = solve2(arr, size, sum);
    vector<pair<int, int>> ans = solve3(arr, size, sum);
    print(ans);
    return 0;
}