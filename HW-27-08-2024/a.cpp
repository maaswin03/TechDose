#include <iostream>
using namespace std;

int main() {
    int num , count = 0;
    cout << "Enter integer value : ";
    cin >> num;
    while(num){
        num = num & (num - 1);
        count++;
    }
    cout << "Number of set bits is : " << count;
    return 0;
}