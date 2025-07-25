#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    // find first zero element index

    int j = -1;
    for (int i=0; i<n; i++) {
        if (arr[i] == 0) {
            j = i;
            break;
        }
    }

    if (j == -1) return -1;

    // swap zero with non-zero element and increament index of zero

    for (int i=j+1; i<n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
