#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n,count=0;
  cin >> n;
  
  vector<int> v;
  
  for(int i=1;i*i<=n;i++) {
      if(n%i==0){
          count++;
          if (i!=n/i) {
          count++; }
      }
  }
// TC- O(sqrt(n))


  if(count==2){ cout<< "Prime" <<endl; }
  else { cout<< "Not a Prime" <<endl; }
  
  return 0;
}