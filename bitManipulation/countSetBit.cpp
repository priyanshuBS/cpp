#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    // while (n != 0) {
    //     if (n&1) count++;
    //     n = n >> 1;
    // }

    while (n != 0) {
        n = n & (n-1);
        count++;
    }

    cout << "Number of set Bit: " << count << endl;
}