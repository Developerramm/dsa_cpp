#include <iostream>
using namespace std;

int main()
{

    cout << (5 & 5) << endl;
    cout << (3 & 5) << endl;

    cout << (5 | 3) << endl;
    cout << (2 | 8) << endl;

    cout << (~5) << endl;
    cout << -(~8) << endl;

    cout << (5 ^ 3) << endl;
    cout << (5 ^ 9) << endl;

    cout << (4 << 1) << endl;
    cout << (4 << 2) << endl;

    cout << (4 >> 2) << endl;
    cout << (4 >> 4) << endl;

    return 0;
}