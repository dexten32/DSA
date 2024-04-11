#include<bits/stdc++.h>
using namespace std;

int max_num(int arr[], int n) {
    int max = arr[0];
    for(int i=0;i<n;i++) {
        if(arr[i]>max) max = arr[i];
    }
    return max;
}

int main() {
  // write your code here...
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i < n;i++){
      cin >> arr[i]; 
  }
  cout << max_num(arr,n);
  return 0;
}