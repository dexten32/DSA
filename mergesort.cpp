#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& array, int left, int middle, int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;
    vector<int> leftArray(n1);
    vector<int> rightArray(n2);
    for (int i = 0; i < n1; i++) {
        leftArray[i] = array[left + i];
    } for (int j = 0; j < n2; j++) {
        rightArray[j] = array[middle + 1 + j];
    }

    int i = 0;
    int j = 0;  
    int k = left;  

    while (i < n1 && j < n2) {
        if (leftArray[i] <= rightArray[j]) {
            array[k] = leftArray[i];
            i++;
        } else {
            array[k] = rightArray[j];
            j++;
        }
        k++;
    } while (i < n1) {
        array[k] = leftArray[i];
        i++;
        k++;
    } while (j < n2) {
        array[k] = rightArray[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& array, int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;
        mergeSort(array, left, middle);
        mergeSort(array, middle + 1, right);
        merge(array, left, middle, right);
    }
}

int main() {
    vector<int> array = {38, 27, 43, 3, 9, 82, 10};
    int n = array.size();
    mergeSort(array, 0, n - 1);
    cout << "Sorted Array: ";
    for (int num : array) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
