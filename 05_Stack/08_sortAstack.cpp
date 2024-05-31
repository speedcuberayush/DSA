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

void sortedInsertion(stack<int> &stk, int data)
{
    if (stk.empty())
    {
        stk.push(data);
        return;
    }
    if (stk.top() <= data)
    {
        stk.push(data);
        return;
    }
    int temp = stk.top();
    stk.pop();
    sortedInsertion(stk, data);
    stk.push(temp);
}
void sort(stack<int> &stk)
{
    if (stk.empty())
        return;
    int data = stk.top();
    stk.pop();
    sort(stk);
    sortedInsertion(stk, data);
}

int main()
{
    stack<int> stk;
    for (int i = 0; i < 5; i++)
        stk.push(5 - i);
    display(stk);
    sort(stk);
    display(stk);
    return 0;
}