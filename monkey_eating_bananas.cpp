#include<bits/stdc++.h>
using namespace std;

long long time_to_eat(int arr[], int n, int mid) {
    long long total_time = 0;
    for(int i=0;i<n;i++) {
        total_time+= ceil((double) arr[i]/ (double) mid);
    }
    return total_time;
}

int monkey_eating_banana(int arr[], int n, int h) {
    int low = 0;
    int high = *max_element(arr,arr+n);
    int ans = high;
    while(low<=high) {
        int mid = (low+high)/2;
        if(time_to_eat(arr,n,mid)<=h) {
            ans = mid;
            high = mid-1;
        } else low = mid+1;
    }
    return ans;
}


int main() {
  // write your code here...
  int n, h;
    cin >> n >> h;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << monkey_eating_banana(arr, n, h);
    return 0;
}