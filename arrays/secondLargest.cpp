#include <iostream>
#include <climits>
using namespace std;

int secondLargest(int arr[], int n) {
    int largest = arr[0];
    int secondLargest = INT_MIN;

    for (int i=0; i<n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int secondSmallest(int arr[], int n) {
    int smallest = arr[0];
    int secondSmallest = INT_MAX;

    for (int i=0; i<n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] > smallest) {
            secondSmallest = arr[i];
        }
    }
    return secondSmallest;
}

int main() {
    int n;
    cin >> n;

    int arr[1000];

    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << "Second Largest: " << secondLargest(arr, n) << endl;
    cout << "Second Smallest: " << secondSmallest(arr, n) << endl;
}
