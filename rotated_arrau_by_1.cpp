#include<bits/stdc++.h>
using namespace std;

void rotating_arr(int arr[], int n) {
    int temp = arr[0];
    for(int i=1;i<=n-1;i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}

int main() {
  // write your code here...
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) {
      cin >> arr[i];
  }
  rotating_arr(arr,n);
  for(int i=0;i<n;i++) cout<<arr[i]<<" ";
  return 0;
}