#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number to print ";
    cin >> n;

    for (int row = 0; row < n; row++)
    {

        for (int space = 0; space < n - row - 1; space++)
        {
            cout << "  ";
        }

        int start = row + 1;
        for (int col = 0; col <= row; col++)
        {
            cout << start << " ";
            start++;
        }
        start = 2 * row;
        for (int col = 0; col < row; col++)
        {
            cout << start << " ";
            start--;
        }
        cout << endl;
    }

    return 0;
}