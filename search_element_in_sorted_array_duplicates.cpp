#include<bits/stdc++.h>
using namespace std;

bool SearchElementInSortedArrayDuplicates(int arr[], int n, int x) {
    int low = 0;
    int high = n-1;
    bool ans = false;
    while(low<=high) {
        int mid = (low+high)/2;
        if(arr[mid] == x) ans = true;
        if(arr[low] == arr[mid] && arr[mid] == arr[high]) {
            low = low+1;
            high = high-1;
        }
        if(arr[low]<=arr[mid]) {
            if(arr[low]<=x&& x<=arr[mid]) high = mid-1;
            else low = mid+1;
        }
        else {
            if(arr[mid]<=x && x<=arr[high]) low = mid+1;
            else high = mid-1;
        }
    }
    return ans;
}


int main() {
  // write your code here...
  int n,x;
  cin>>n>>x;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  cout<<SearchElementInSortedArrayDuplicates(arr,n,x);
  return 0;
}