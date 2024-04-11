#include<bits/stdc++.h>
using namespace std;

int no_of_bouquets(int arr[],int n, int k, int mid) {
    int count = 0;
    int bouquets = 0;
    for(int i=0;i<n;i++) {
        if(arr[i]<=mid) {
            count+=1;
            if(count == k) {
                bouquets+=1;
                count = 0;
            } else count = 0;
        }
    }
    return bouquets;
}


int flower_bloom(int arr[], int n, int k, int m) {
    if(n<m*k) return -1;
    int low = *min_element(arr,arr+n);
    int high = *max_element(arr,arr+n);
    int ans = high;
    while(low<=high) {
        int mid = (low+high)/2;
        if(no_of_bouquets(arr,n,k,mid)>=m) {
            ans = mid;
            high = mid-1;
        } else low = mid+1;
    }
    return ans;
}

int main() {
  // write your code here...
  int n,k,m;
  cin>>n>>k>>m;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  cout<<flower_bloom(arr,n,k,m);
  return 0;
}