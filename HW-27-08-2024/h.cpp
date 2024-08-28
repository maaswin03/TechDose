#include <iostream>
#include <vector>
using namespace std;


string toup(string ch1){
    for(int i = 0 ; i < ch1.length() ; i++){
        ch1[i] = ch1[i] ^ (1 << 5);
    } 
    return ch1;
}

string tolo(string ch1){
    for(int i = 0 ; i < ch1.length() ; i++){
        ch1[i] = ch1[i] + (1 << 5);
    } 
    return ch1;
}

int main() {
    string ch1;
    int num;
    cout << "Enter string value : ";
    cin >> ch1;
    cout << "Select options 1.toupper 2.tolower : ";
    cin >> num;
    
    if(num == 1){
        ch1 = toup(ch1);
    }
    else if(num == 2){
        ch1 = tolo(ch1);
    }
    cout << ch1;
}