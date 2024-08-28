#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num1 , num2;
    cout << "Enter value of num1 : ";
    cin >> num1;
    cout << "Enter value of num2 : ";
    cin >> num2;
    num1 ^= num2;
    num2 ^= num1;
    num1 ^= num2;
    cout << "num1 value after swapping : " << num1;
    cout << "\nnum2 value after swapping : " << num2;
    return 0;
}