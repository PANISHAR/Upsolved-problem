#include<iostream>
using namespace std;
int check_last_bit(int x){
    return (x & 1);
}
int main(){
    int x; cin >> x;
    cout << check_last_bit(x)<<endl;
    return 0;
}