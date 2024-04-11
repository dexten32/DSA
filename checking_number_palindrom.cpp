#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int last_digit,x=0;
  int N;
  cin>>N;
  
  
  while(N!=0){
      last_digit = N%10;
      x= x*10+last_digit;
      N=N/10;
  }
  if(x == N){
      cout << "It is a Palindrome"<<endl;
  } else {
      cout << "It is not a Palindrome"<<endl;
  }
  return 0;
}