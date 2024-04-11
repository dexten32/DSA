#include<bits/stdc++.h>
using namespace std;

int calc_second_smallest(int arr[], int n) {
    int min = arr[0];
    int second_smallest = -1;
    for(int i=0;i<=n-1;i++) {
        if(arr[i] < min) {
            second_smallest = min;
            min = arr[i];
        }
        if(arr[i] < second_smallest && arr[i] > min) {
            second_smallest = arr[i];
        }
    }
    return second_smallest;
}

int main() {
  // write your code here...
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++) cin >> arr[i];
  cout << calc_second_smallest(arr,n);
  return 0;
}