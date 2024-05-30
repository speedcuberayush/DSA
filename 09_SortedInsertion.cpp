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
int main()
{
    stack<int> stk;
    // for (int i = 0; i < 5; i++)
    //     stk.push(i + 1);
    sortedInsertion(stk, 1);
    sortedInsertion(stk, 3);
    sortedInsertion(stk, 2);
    sortedInsertion(stk, 4);
    sortedInsertion(stk, 9);
    sortedInsertion(stk, 1);
    display(stk);
    return 0;
}