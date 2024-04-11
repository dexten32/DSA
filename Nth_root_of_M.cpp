#include<bits/stdc++.h>
using namespace std;

int power(int mid, int n, int m) {
    int ans = 1;
    for(int i=0;i<n;i++) {
        ans = ans*mid;
        if(ans>m) return 1;
    }
    if(ans==m) return 0;
    else return -1;
}


int NthRootOfM(int n,int m)  {
    int low = 0;
    int high = m;
    while(low<=high) {
        long long mid = (low+high)/2;
        if(power(mid,n,m) == 0) {
            return mid;
        } else if(power(mid,n,m) == -1) {
            low = mid+1;
        } else high = mid-1;
    }
    return -1;
}

int main() {
  // write your code here...
  int n,m;
  cin>>n>>m;
  cout<<NthRootOfM(n,m);
  return 0;
}