// How to check if a bit is on or off in a number?
// last bit check = (x & 1)
// kth bit check = (x>>k)&1

#include <iostream>
using namespace std;
// check last bit on or off.
int check_last_bit(int x)
{
    return (x & 1);
}
// check kth bit is on or off.
int check_kth_bit(int x, int k)
{
    return (x >> k) & 1;
}
// print all on bits in a number.
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
// print all off bits.
void print_off_bit(int x)
{
    for (int k = 0; k < 32; k++)
    {
        if (!check_kth_bit(x, k))
        {
            cout << k << " ";
        }
    }
    cout << endl;
}

// find number of on bits in a number..
int cnt_on_bit(int x)
{
    int cnt = 0;
    for (int k = 0; k < 32; k++)
    {
        if (check_kth_bit(x, k))
        {
            cnt++;
        }
    }
    return cnt;
}
// find the number of off bits in a number..
int cnt_off_bit(int x)
{
    int cnt = 0;
    for (int k = 0; k < 32; k++)
    {
        if (!check_kth_bit(x, k))
        {
            cnt++;
        }
    }
    return cnt;
}

// check is number is even or odd..
bool is_even(int x)
{
    if (x & 1)
    {
        return false;
    }
    else
    {
        return true;
    }
}
// turn on a bit in a number..

int set_kth_bit(int x, int k)
{
    return x | (1 << k);
}

// turn off a bit in a number..

int unset_kth_bit(int x, int k)
{
    return (x & (~(1 << k)));
}

// toggle a bit in a number.

int toggle_kth_bit(int x, int k)
{
    return (x ^ (1 << k));
}
int main()
{
    // cout << "check the last bit :" << check_last_bit(50) << endl;
    // cout << "check the kth bit : " << check_kth_bit(50, 6) << endl;
     print_on_bit(50);
    // print_off_bit(50);
    // cout << cnt_on_bit(50) << endl;
    // cout << cnt_off_bit(50) << endl;
    // cout << is_even(11) << endl;
    // cout << set_kth_bit(11, 2) << endl;
    // cout << unset_kth_bit(15, 2) << endl;
    // cout << toggle_kth_bit(45, 3) << endl;
}