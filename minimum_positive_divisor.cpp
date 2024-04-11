#include<bits/stdc++.h>
using namespace std;

long long calc_min_hour(int arr[], int n, int mid) {
    long long total_time = 0;
    for(int i=0;i<n;i++) {
        total_time += ceil((double) arr[i]/ (double) mid);
    }
    return total_time;
}


int minimum_positive_divisor(int arr[], int n, int k) {
    int low = 1;
    int high = *max_element(arr,arr+n);
    int ans = high;
    while(low<=high) {
        int mid = (low+high)/2;
        if(calc_min_hour(arr,n,mid)<=k) {
            ans = mid;
            high = mid-1;
        } else low = mid+1;
    }
    return ans;
}


int main() {
  // write your code here...
  int n,k;
  cin>>n>>k;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  cout<<minimum_positive_divisor(arr,n,k);
  return 0;
}