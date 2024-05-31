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
void insert(stack<int> &stk, int data)
{
    if (stk.empty())
    {
        stk.push(data);
        return;
    }
    int temp = stk.top();
    stk.pop();
    insert(stk, data);
    stk.push(temp);
}
void reverse(stack<int> &stk)
{
    if (stk.empty())
        return;
    int data = stk.top();
    stk.pop();
    reverse(stk);
    insert(stk, data);
}
int main()
{
    stack<int> stk;
    for (int i = 0; i < 5; i++)
        stk.push(i + 1);
    display(stk);
    reverse(stk);
    display(stk);
    return 0;
}