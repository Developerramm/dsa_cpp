#include <iostream>
using namespace std;

void printName(string name)
{

    for (int i = 0; i < 5; i++)
    {
        cout << name << endl;
    }
}

int main()
{

    // int n;
    // cout << "Enter the value of n : " << endl;
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << "Ram Kumar " << endl;
    // }

    printName("ram kumar");
    printName("Sangita kumari");

    return 0;
}