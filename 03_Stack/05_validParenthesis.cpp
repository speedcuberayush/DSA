#include <bits/stdc++.h>
using namespace std;
bool solve(string exp)
{
    stack<char> stk;
    unordered_map<char, char> mpp = {
        {'[', ']'},
        {'(', ')'},
        {'{', '}'},
    };
    for (auto i : exp)
    {
        if (i == '(' || i == '[' || i == '{')
            stk.push(i);
        else
        {
            if (i == ')' && (stk.top() == '{' || stk.top() == '['))
                return 0;
            if (i == ']' && (stk.top() == '(' || stk.top() == '{'))
                return 0;
            if (i == '}' && (stk.top() == '(' || stk.top() == '['))
                return 0;

            stk.pop();
        }
    }
    return stk.empty();
}
int main()
{
    string exp = "{[)]]}";
    cout << ((solve) ? "YES" : "NO") << endl;
    return 0;
}