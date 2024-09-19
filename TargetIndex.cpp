#include <iostream>
#include <vector>
using namespace std;

int findIndex(const vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return i + 1;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {2, 4, 6, 7, 8};
    int target = 6;
    
    int index = findIndex(arr, target);
    cout << index << endl;

    return 0;
}
