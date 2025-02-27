#include <iostream>
using namespace std;

int main()
{

    int age;
    cout << "Enter your age : ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You can vote " << endl;
    }
    else
    {
        cout << "You cannot vote " << endl;
    }

    int score;
    cout << "Enter the score : ";
    cin >> score;
    if (score < 300)
    {
        cout << "India wins " << endl;
    }
    else
    {
        cout << "Pakistan wins " << endl;
    }

    return 0;
}