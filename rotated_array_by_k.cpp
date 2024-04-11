#include<bits/stdc++.h>
using namespace std;

void rotating_arr(int arr[], int n, int k) {
    int temp[k];
    for(int i=0;i<=k-1;i++)
    {
        temp[i] = arr[i];
    }
    for(int i=k;i<=n-1;i++)
    {
        arr[i-k] = arr[i];
    }
    for(int i=n-k;i<=n-1;i++)
    {
        arr[i] = temp[i-(n-k)];
    }
}

int main() {
  // write your code here...
  int n, k;
  cin>>n>>k;
  k = k%n;
  int arr[n];
  for(int i=0;i<n;i++) {
      cin >> arr[i];
  }
  rotating_arr(arr,n,k);
  for(int i=0;i<n;i++) cout<<arr[i]<<" ";
  return 0;
}