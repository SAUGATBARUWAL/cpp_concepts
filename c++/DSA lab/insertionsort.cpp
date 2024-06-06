#include <iostream>

using namespace std;

// Function to perform insertion sort on an array
void insertion_sort(int list[], int n) {
    int i, j, temp;

    for (i = 1; i < n; i++) {
        temp = list[i];

        j = i - 1;
        while (j >= 0 && temp < list[j]) {
            list[j + 1] = list[j];
            j = j - 1;
        }
        list[j + 1] = temp;
    }
}

int main() {
    int arr[] = {44, 22, 33, 66, 11, 33, 55};

    insertion_sort(arr, 7);

    // Display the sorted array
    for (int i = 0; i < 7; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
