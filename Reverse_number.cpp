#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int last_digit;
  int N;
  cin>>N;
  while(N!=0){
      last_digit = N%10;
      N=N/10;
      cout << last_digit;
  }
  return 0;
}

//OR

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
  cout << x;
  return 0;
}