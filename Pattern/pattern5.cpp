#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number to print numeric half pyramid " << endl;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            cout << col + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}