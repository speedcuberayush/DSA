#include <bits/stdc++.h>
using namespace std;
void display(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
void deleteMiddle(stack<int> &stk, int n)
{

    if ((stk.size() == (n / 2) + 1) && n & 1)
    {
        stk.pop();
        return;
    }
    if ((stk.size() == (n / 2)) && !(n & 1))
    {
        stk.pop();
        return;
    }
    int temp = stk.top();
    stk.pop();
    deleteMiddle(stk, n);
    stk.push(temp);
}
int main()
{
    stack<int> stk;
    int n = 5;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(5);
    stk.push(6);
    display(stk);
    deleteMiddle(stk, 6);
    display(stk);

    return 0;
}