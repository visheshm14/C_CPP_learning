#include <iostream>
using namespace std;
int main()
{
    int arr[5], temp = 0, k;
    cout << "enter 5 elements of array" << endl;
    for (int i = 0; i < 5; i++)
        cin >> arr[i];
    cout << "enter from where you start the rotation" << endl;
    cin >> k;
    for (int i = 1; i <= 3; i++)
    {
        temp = arr[5];
        for (int j = 5; j >= 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }

    cout << "rotated array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
}