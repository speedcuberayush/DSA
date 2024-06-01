#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        stack<string> stk;
        string word;

        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] != ' ')
                word += s[i];
            else if (!word.empty())
            {
                stk.push(word);
                word = "";
            }
        }

        if (!word.empty())
            stk.push(word);

        string ans = "";
        while (!stk.empty())
        {
            ans += stk.top();
            stk.pop();
            if (!stk.empty())
                ans += " ";
        }

        return ans;
    }
};