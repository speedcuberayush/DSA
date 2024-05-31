#include <iostream>
using namespace std;
void traversal(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

bool isSorted(int *arr, int size)
{
    if (size == 1)
        return 1;
    if (arr[0] > arr[1])
        return 0;
    return isSorted(arr + 1, size - 1);
}
int main()
{
    int arr[100];
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    traversal(arr, size);
    cout << ((isSorted(arr, size)) ? "It is sorted" : "It is not sorted") << endl;
    return 0;
}