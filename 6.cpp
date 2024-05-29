#include <bits/stdc++.h>
using namespace std;

void display(stack<int> stk)
{
    while (!stk.empty())
    {
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl;
}
bool solve(string &exp)
{
    stack<char> stk;
    for (auto i : exp)
    {
        if (i == '(' || i == '*' || i == '+' || i == '/' || i == '-')
            stk.push(i);
        else if (i == ')')
        {
            if (stk.top() == '(')
                return 0;
            while (stk.top() != '(')
            {
                stk.pop();
                if (stk.empty())
                    return 0;
            }
            stk.pop();
        }
    }
    return stk.empty();
}
int main()
{
    string exp1 = "(a)";
    string exp2 = "(a*b+(c/d))";

    cout << (solve(exp1) ? "YES" : "NO") << endl;
    cout << (solve(exp2) ? "YES" : "NO") << endl;

    return 0;
}