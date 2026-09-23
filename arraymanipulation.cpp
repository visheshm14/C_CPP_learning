#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec(8, 0); 

    int op;
    cout << "Enter number of operations: ";
    cin >> op;

    while (op--)
    {
        int l, r, k;
        cout << "Enter l r k: ";
        cin >> l >> r >> k;

        if (l < 0 || r >= vec.size() || l > r)
        {
            cout << "Invalid range!" << endl;
            continue;
        }

        vec[l] += k;

        if (r + 1 < vec.size())
        {
            vec[r + 1] -= k;
        }
    }

    for (int i = 1; i < vec.size(); i++)
    {
        vec[i] += vec[i - 1];
    }

    cout << "\nFinal Array:\n";
    for (int x : vec)
    {
        cout << x << " ";
    }

    cout << endl;
    return 0;
}