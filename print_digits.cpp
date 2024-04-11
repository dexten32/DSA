#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int last_digit;
  int N;
  cin>>N;
  while(N!=0){
      last_digit = N%10;
      N=N/10;
      cout << last_digit << endl;
  }
  return 0;
}