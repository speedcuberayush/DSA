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
void solve(stack<int> &stk, int data)
{
    if (stk.empty())
    {
        stk.push(data);
        return;
    }
    int temp = stk.top();
    stk.pop();
    solve(stk, data);
    stk.push(temp);
}
int main()
{
    stack<int> stk;
    for (int i = 0; i < 10; i++)
        stk.push(i + 1);
    display(stk);
    solve(stk, 0);
    display(stk);
    return 0;
}