#include <bits/stdc++.h>
using namespace std;
int SecondlargestElement(int arr[], int n){
    int max = arr[0];
    int second_largest = -1;
    for (int i = 1; i <= n-1; i++){
        if (arr[i] > max){
            second_largest = max;
            max = arr[i];
        }
        if (arr[i] > second_largest && arr[i] < max){
            second_largest = arr[i];
        }
    }
    return second_largest;
}
int main() {
    int n;
    cin >> n; // n = 6
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i]; // 4 5 7 10 10 8
    cout << SecondlargestElement(arr,n); // 8
    return 0;
}