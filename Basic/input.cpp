#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number : " << endl;
    cin >> n;
    cout << "Your number is " << n << endl;

    string name;
    cout << "Enter your name " << endl;
    getline(cin, name);
    cout << name << endl;

    return 0;
}