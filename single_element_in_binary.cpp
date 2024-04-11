#include<bits/stdc++.h>
using namespace std;

int single_element_linear(int arr[], int n) {
    if(n==1) return arr[0];
    if(arr[0] != arr[1]) return arr[0];
    if (arr[n-1] != arr[n-2]) return arr[n-1];
    for(int i=1;i<n-1;i++) {
        if(arr[i] != arr[i-1] and arr[i]!=arr[i+1]) return arr[i]; 
    }
    return 0;
}

int single_element_binary(int arr[], int n) {
    int low = 0;
    int high = n-1;
    int ans = 0;
    while(low<=high) {
        int mid = (low+high)/2;
        if(arr[mid]!= arr[mid-1] && arr[mid]!=arr[mid+1]) return arr[mid];
        if((mid%2==1 && arr[mid]==arr[mid-1])|| (mid%2==0 && arr[mid] == arr[mid+1])) {
            low = mid+1;
        }
        else high = mid-1;
    }
    return 0;
}

int main() {
  // write your code here...
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  cout<<single_element_binary(arr,n);
  return 0;
}