#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        sort(strs.begin(), strs.end());
        string ans = "";
        string first = strs[0];
        string last = strs[strs.size() - 1];
        int index = 0;
        while (index < min(first.size(), last.size()))
        {
            if (first[index] != last[index])
                return ans;
            ans += first[index];
            index++;
        }
        return ans;
    }
};