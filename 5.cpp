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
void atBottom(stack<int> &stk, int ele)
{
    if (stk.empty())
    {
        stk.push(ele);
        return;
    }
    int data = stk.top();
    stk.pop();
    atBottom(stk, ele);
    stk.push(data);
}
void reverse(stack<int> &stk)
{
    if (stk.empty())
        return;

    int data = stk.top();
    stk.pop();
    reverse(stk);
    atBottom(stk, data);
}

int main()
{
    stack<int> stk;
    stk.push(9);
    stk.push(7);
    stk.push(2);
    stk.push(4);
    stk.push(1);
    display(stk);
    // reverse(stk);
    atBottom(stk, 0);
    display(stk);

    return 0;
}