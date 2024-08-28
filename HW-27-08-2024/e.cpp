#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1,2,3};
    vector<vector<int>> all_subset;
    for(int i = 0 ; i < (1 << arr.size()) ; i++){
        vector<int> subset;
        for(int j = 0 ; j < arr.size() ; j++){
            if(i & (1 << j)){
                subset.push_back(arr[j]);
            }
        }
        all_subset.push_back(subset);
    }
    cout << "[";
    for(int i = 0 ; i < all_subset.size() ; i++){
        cout << "[";
        for(int j = 0 ; j < all_subset[i].size() ; j++){
            cout << all_subset[i][j] << " ";
        }
        cout << "] , ";
    }
    cout << "]";
}