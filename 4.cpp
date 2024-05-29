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
void sortedInsertion(stack<int> &stk, int ele)
{
    if (stk.empty() || stk.top() < ele)
    {
        stk.push(ele);
        return;
    }
    int data = stk.top();
    stk.pop();
    sortedInsertion(stk, ele);
    stk.push(data);
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
    stk.push(9);
    stk.push(7);
    stk.push(2);
    stk.push(4);
    stk.push(1);
    stk.push(3);
    stk.push(2);
    stk.push(2);
    stk.push(5);
    stk.push(7);

    // sortedInsertion(stk, 5);
    // sortedInsertion(stk, 4);
    // sortedInsertion(stk, 3);
    // sortedInsertion(stk, 2);
    // sortedInsertion(stk, 1);
    display(stk);
    sort(stk);
    display(stk);

    return 0;
}