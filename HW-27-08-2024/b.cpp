#include <iostream>
using namespace std;

int main() {
    int num , i;
    cout << "Enter integer value : ";
    cin >> num;
    cout << "Enter the ith bit to check : ";
    cin >> i;
    if(num & (1 << i) != 0){
        cout << "The " << i << " th bit is set";
    }
    else{
        cout << "The " << i << " th bit is not set";
    }
    return 0;
}