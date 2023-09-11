#include<iostream>
using namespace std;
int check_kth_bit(int x, int k){
    return (x>>k)&1;
}
int main(){
    int x,k;
    cin >> x >>k;
    cout <<check_kth_bit(x,k)<<endl;
}