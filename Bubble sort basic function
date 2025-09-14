#include <iostream>
using namespace std;

void bubble(int arr[], int n) { // parameter me int ,vector, data type mention karne h  
    for(int i = 0; i < n - 1; i++) {  // for selection of the which integer should be comapred with the rest if others 
        for(int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printarr(int arr[], int n) {
    for(int f = 0; f < n; f++) {
        cout << arr[f] << " ";
    }
}

int main() {
    int n = 5;
    int arr[5] = {2, 4, 1, 5, 8};
    bubble(arr, n);
    printarr(arr, n);
}
