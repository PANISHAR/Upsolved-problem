// print all on bits in a number...

#include <iostream>
using namespace std;
int check_kth_bit(int x, int k)
{
    return (x >> k) & 1;
}

void print_on_bit(int x)
{
    for (int k = 0; k < 32; k++)
    {
        if (check_kth_bit(x, k))
        {
            cout << k << " ";
        }
    }
    cout << endl;
}
int main()
{
    int x;
    cin >> x;
    print_on_bit(x);
}