#include <bits/stdc++.h>
using namespace std;

void print(const vector<int> &arr)
{

    for (auto it : arr)
        cout << it << " ";
    cout << endl;
}

int main()
{
    vector<int> arr = {1, 2, 1, 2, 3, 3, 4, 6, 7, 8, 7, 6, 8};
    int n = arr.size();

    cout << "ORIGINIAL: ";
    print(arr);

    return 0;
}
/*
void sort(vector<int> &arr,int s,int e){
if(s<e){
int i=s-1;
for(int j=0;j<e;j++)
if(arr[j]<arr[e])
swap(arr[++i],arr[j])
swap(arr[++i],arr[e])
sort(arr,s,i-1);
sort(arr,i+1,e);
}

}

*/