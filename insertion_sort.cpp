#include <bits/stdc++.h>
using namespace std;
void insertionsort(int arr[], int n){
    for(int i = 1; i <= n-1; i++){
        int j = i;
        while((arr[j-1] > arr[j]) && j >= 1){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    insertionsort(arr,n);
    for(auto x: arr){
        cout << x << " ";
    }
        return 0;
}