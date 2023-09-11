// check the number is even or odd..

#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    if (x & 1)
    {
        cout << "odd" << endl;
    }
    else
    {
        cout << "even" << endl;
    }
}