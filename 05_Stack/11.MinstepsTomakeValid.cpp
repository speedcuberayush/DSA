#include <bits/stdc++.h>
using namespace std;

int solve(string exp)
{
    if (exp.length() & 1)
        return -1;
    stack<char> stk;
    int open = 0;
    int closed = 0;
    for (auto i : exp)
    {
        if (i == '(')
            stk.push(i);
        else
        {
            if (!stk.empty() && stk.top() == '(')
                stk.pop();
            else
                stk.push(i);
        }
    }

    while (!stk.empty())
    {
        if (stk.top() == '(')
            open++;
        else
            closed++;
        stk.pop();
    }
    return (open + 1) / 2 + (closed + 1) / 2;
}
int main()
{

    string exp1 = "(())";
    string exp2 = "(())";
    string exp3 = "(())";
    string exp4 = "(()())";
    string exp5 = "((()))";
    string exp6 = ")))((((";

    cout << solve(exp1) << endl;
    cout << solve(exp2) << endl;
    cout << solve(exp3) << endl;
    cout << solve(exp4) << endl;
    cout << solve(exp5) << endl;
    cout << solve(exp6) << endl;

    return 0;
}