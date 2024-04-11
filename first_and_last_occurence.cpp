#include <bits/stdc++.h>
using namespace std;
int first_Occurrence(int arr[], int n, int k) {
    int ans = -1;
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == k) {
            ans = mid;
            high = mid - 1;
        } else if (arr[mid] > k) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}
int last_Occurrence(int arr[], int n, int k) {
    int ans = -1;
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == k) {
            ans = mid;
            low = mid + 1;
        } else if (arr[mid] > k) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}
int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << first_Occurrence(arr, n, k) << " " << last_Occurrence(arr, n, k);
    return 0;