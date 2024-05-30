#include <bits/stdc++.h>
using namespace std;

bool isop(char i)
{
    if (i == '*' || i == '/' || i == '+' || i == '-')
        return 1;
    return 0;
}
bool solve(string exp)
{
    stack<int> stk;
    for (auto i : exp)
    {
        if (i == '(')
            stk.push(i);
        if (isop(i))
            stk.push(i);
        if (i == ')')
        {
            if (stk.top() == '(')
                return 0;
            else
            {
                while (stk.top() != '(')
                    stk.pop();
                stk.pop();
            }
        }
    }
    return stk.empty();
}
int main()
{

    string exp1 = "(a+b*(c/d))";
    string exp2 = "((c/d))";
    string exp3 = "((c))";
    string exp4 = "((a+b)*(c/d))";
    string exp5 = "(a+b*((c/d)))";
    string exp6 = "(((a+b)))";
    cout << (solve(exp1) ? "YES" : "NO") << endl;
    cout << (solve(exp2) ? "YES" : "NO") << endl;
    cout << (solve(exp3) ? "YES" : "NO") << endl;
    cout << (solve(exp4) ? "YES" : "NO") << endl;
    cout << (solve(exp5) ? "YES" : "NO") << endl;
    cout << (solve(exp6) ? "YES" : "NO") << endl;
    return 0;
}