#include <bits/stdc++.h>
using namespace std;

void print_subseq(int i, vector<int> &v, int arr[], int n)
{
    if(i>=n)
    {
        for(auto k:v)
            cout<<k<<" ";
        cout<<endl;
        return;
    }
    //Not pick
    print_subseq(i+1,v,arr,n);
    
    //Not pick
    v.push_back(arr[i]);
    print_subseq(i+1,v,arr,n);
    v.pop_back();
    
}

int main() {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        vector<int> v;
        print_subseq(0,v,arr,n);
        return 0;
}