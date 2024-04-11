#include<bits/stdc++.h>
using namespace std;

int consecutive_ones(int arr[], int n){
    int cur =0;
    int max = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == 0) {
            cur = 0;
        }
        else if(arr[i] == 1) {
            cur +=1;
            if(cur>max){
                max = cur;
            }
        }
    }
    return max;
}

int main() {
  // write your code here...
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  cout<<consecutive_ones(arr,n);
  return 0;
}