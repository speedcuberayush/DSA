#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string removeOuterParentheses(string s)
    {
        stack<char> stk;
        string ans = "";
        for (auto i : s)
        {
            if (i == '(')
            {
                if (!stk.empty())
                    ans += i;
                stk.push(i);
            }
            else
            {
                if (stk.size() > 1)
                    ans += i;
                stk.pop();
            }
        }
        return ans;
    }
};

// approach 2

// class Solution {
// public:
//     string removeOuterParentheses(string s) {
//         int count=0;
//         string res="";
//         for(auto i:s){
//             if(i=='(')
//             {
//                 if(count>0)
//                 res+='(';
//                 count++;
//             }
//             else{
//                 if(count>1)
//                 res+=')';
//                 count--;
//             }
//         }
//         return res;
//     }
// };