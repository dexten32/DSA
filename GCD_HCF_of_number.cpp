#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int a,b;
  cin >> a >> b;
  int gcd = 0;
  
  
  for(int i=1;i<=(min(a,b));i++) {
      if(a%i==0 && b%i==0){
          gcd = i;
      }
  }
  
  cout << gcd << endl;
  
  return 0;
}

// TC- O(min(a,b))


// OR


#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int a,b;
  cin >> a >> b;
  
  while(a!=0 && b!=0){
      if (a>b){
          a=a%b;
      } else{
          b=b%a;
      }
  }
  if (a==0){ cout << b <<endl; }
  else { cout<< a << endl; }
  
  
  return 0;
}

// TC- O(log(min(a,b)))