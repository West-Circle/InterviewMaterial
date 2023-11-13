#include <iostream>

using namespace std;

int main()
{
    // normal array print, and using pointer to print
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    // pointer
    int *p = arr;
    int i = 0;
    int len = sizeof(arr) / sizeof(int);
    while (i < len)
    {
        cout << *p << " ";
        p++; // next pointer
        i++;
    }
    cout << endl;
}