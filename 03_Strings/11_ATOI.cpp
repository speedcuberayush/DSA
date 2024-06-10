#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int myAtoi(string s)
    {
        vector<int> ans;
        for (auto i : s)
            if (i != ' ')
                ans.push_back(i);
        int res = 0;
        for (int i = 0; i < ans.size(); i++)
        {
            res += (ans[i] + pow(10, i));
        }
        return res;
    }
};