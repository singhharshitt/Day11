#include <iostream>
using namespace std;

bool findTarget(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return true;
        }
    }
    return false;
}

int main() {
    int k;
  cout<<"Enter no. of elements: ";
  
    int arr[k];
  for(int i=0; i<k;i++){
    cin>>arr[i];
  }
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    
    cout << "Enter target: ";
    cin >> target;

    if (findTarget(arr, n, target)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
