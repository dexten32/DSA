#include<bits/stdc++.h>
using namespace std;

int missing_no(int arr[], int n){
    int temp[n+1] = {0};
    for(int i=0;i<=n-2;i++)
    {
        temp[arr[i]]++;
    }
    
    for(int i=1;i<=n;i++)
    {
        if(temp[i]==0)
        {
            return i;
        }
    }
    return 0;
}

int main() {
  // write your code here...
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  cout<<missing_no(arr,n);
  return 0;
}