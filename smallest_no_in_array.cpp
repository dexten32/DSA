#include<bits/stdc++.h>
using namespace std;

int min_num(int arr[], int n){
    int min = arr[0];
    for(int i=0;i<n;i++) {
        if(arr[i]<min) min = arr[i];
    }
    return min;
}

int main() {
  // write your code here...
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  cout<<min_num(arr,n);
  return 0;
}