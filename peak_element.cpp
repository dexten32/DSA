#include<bits/stdc++.h>
using namespace std;

int peak_element_linear(int arr[], int n) {
    if (n==1) return 0;
    if(arr[0]>arr[1]) return 0;
    if(arr[n-1]>arr[n-2]) return n-1;
    for(int mid=1;mid<n-2;mid++) {
        if(arr[mid]>arr[mid-1] and arr[mid] > arr[mid+1]) return arr[mid];
    }
    return -1;
}


int peak_element(int arr[], int n) {
    if (n==1) return 0;
    if(arr[0]>arr[1]) return 0;
    if(arr[n-1]>arr[n-2]) return n-1;
    int low = 1;
    int high = n-2;
    while(low<=high) {
        int mid = (low+high)/2;
        if(arr[mid]>arr[mid-1]) low = mid+1;
        else high = mid-1;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) return mid;
    }
    return -1;
}


int main() {
  // write your code here...
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) {
      cin>>arr[i];
  }
  cout<<peak_element(arr,n);
  return 0;
}