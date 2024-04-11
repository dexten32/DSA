#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n) {
    for(int i=0; i<n;i++) {
        if(arr[i]>arr[i+1]) {
            return false;
            break;
        }
    }
    return true;
}

int main() {
  // write your code here...
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++) {
      cin >> arr[i];
  }
  cout<<isSorted(arr,n);
  return 0;
}