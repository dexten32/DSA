#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int count=0;
  int N;
  cin>>N;
  while(N!=0){
      N=N/10;
      count++;
  }
  cout << count << endl;
  return 0;
}