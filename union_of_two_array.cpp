#include<bits/stdc++.h>
using namespace std;

//BRUTEFORCE
vector<int> union_array(vector<int> a, vector<int> b)
{
    set<int> s;
    vector<int> v;
    for(auto k : a) s.insert(k);
    for(auto k : b) s.insert(k);
    for(auto k : s) v.push_back(k);
    return v;
}


//OPTIMAL SOLUTION
vector<int> union_array(vector<int> a, vector<int> b) {
    int i=0;
    int j=0;
    vector<int> v;
    while(i<a.size() && j<b.size())
    {
        if(a[i]<=b[j])
        {
            if(v.empty() || a[i] != v.back())
            {
                v.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if(v.empty() || b[j] != v.back())
            {
                v.push_back(b[j]);
            }
            j++;
        }
    }
    
    while(j<b.size()) {
        if(v.empty() || b[j] != v.back())
            {
                v.push_back(b[j]);
            }
            j++;
    }
    
    while(i<a.size()) {
        if(v.empty() || a[i] != v.back())
        {
            v.push_back(a[i]);
        }
        i++;
    }
    return v;
}


int main() {
  // write your code here...
  int m,n;
  cin>>m>>n;
  vector<int> a,b;
  int x;
  for(int i=0;i<m;i++)
  {
      cin>>x;
      a.push_back(x);
  }
  for(int i=0;i<n;i++)
  {
      cin>>x;
      b.push_back(x);
  }
  vector<int> v = union_array(a,b);
  for(auto k:v) cout << k <<" ";
  return 0;
}