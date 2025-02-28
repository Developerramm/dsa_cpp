#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i < 5; i++)
    {

        cout << "Ram Kumar" << endl;

        break;
    }

    cout << "maniyari " << endl;

    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
            continue;
        cout << i << " ";
    }
    cout << endl;
    cout << "Ram kumar maniyari" << endl;

    return 0;
}