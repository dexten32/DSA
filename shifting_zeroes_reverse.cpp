#include<bits/stdc++.h>
using namespace std;

void shifting_zeroes(int arr[], int n) {
    int i=n-1;
    for(int j=n-1;j>=0;j--)
    {
        if(arr[j]!=0) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i--;
        }
    }
    
}


int main() {
  // write your code here...
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)  cin >> arr[i];
  shifting_zeroes(arr,n);
  for(int i=0;i<n;i++) cout<<arr[i] << " ";
  return 0;
}