#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num1 , num2;
    cout << "Enter value of num1 : ";
    cin >> num1;
    if(num1 & 1){
        cout << "num1 is odd";
    }
    else{
        cout << "num1 is even";
    }
    return 0;
}