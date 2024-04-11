#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n) {
    for(int i=0; i<n;i++) {
        if(arr[i]>arr[i+1]) {
            return false;
            break;
        }
    }
    return true;
}

int remove_dupes(int arr[], int n) {
    set<int> s;
    for(int i=0;i<n;i++) {
        s.insert(arr[i]);
    }
    
    int j = 0;
    for(auto k: s ) {
        arr[j] = k;
        j++;
    }
    return s.size();
}

int main() {
  // write your code here...
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++) {
      cin >> arr[i];
  }
  cout << remove_dupes(arr,n)<<endl;
  for(int i=0;i<n;i++) cout << arr[i]<<" ";
  return 0;
}