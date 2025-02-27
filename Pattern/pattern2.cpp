#include <iostream>
using namespace std;

int main()
{

    int row;
    int col;
    cout << "Enter row : ";
    cin >> row;
    cout << "Enter col : ";
    cin >> col;

    for (int i = 0; i < row; i++)
    {
        if (i == 0 || i == row - 1)
        {
            for (int j = 0; j < col; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        else
        {
            cout << "* ";
            for (int j = 0; j < col - 2; j++)
            {
                // if (j == 0 || j == col - 1)
                // {
                //     cout << "";
                // }
                cout << "  ";
            }
            cout << "* ";
            cout << endl;
        }
    }
    return 0;
}