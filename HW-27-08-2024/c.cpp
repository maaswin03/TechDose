#include <iostream>
using namespace std;

int main() {
    int num , i;
    cout << "Enter integer value : ";
    cin >> num;
    cout << "Enter the ith bit to check : ";
    cin >> i;
    cout << "The  set bit is : " << (num | (1 << i));
    return 0;
}