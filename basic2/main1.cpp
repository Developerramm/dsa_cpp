#include <iostream>
using namespace std;

int main()
{
    int a = 11;
    cout << a << endl;
    cout << ++a << endl;
    cout << a++ << endl;
    cout << a << endl;

    int b = 10;
    cout << --b << endl;
    cout << b-- << endl;
    cout << b << endl;

    cout << (--b) * (-- b) << endl;

    return 0;
}