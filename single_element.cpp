#include<bits/stdc++.h>
using namespace std;
//USING MAP
int single_element(int arr[], int n) {
    map<int,int> m;
    for(int i=0;i<n;i++) {
        m[arr[i]] +=1;
    }
    for(auto k:m) {
        if(k.second==1) return k.first;
    }
    return 0;
}

//USING XOR
int single_element(int arr[], int n) {
    int x =0;
    for(int i=0;i<n;i++) {
        x = x^arr[i];
    }
    return x;
}

int main() {
  // write your code here...
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  cout<<single_element(arr,n);
  return 0;
}